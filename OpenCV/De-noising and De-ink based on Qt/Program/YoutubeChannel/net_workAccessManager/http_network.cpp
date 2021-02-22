#include "http_network.h"
#include <stdio.h>
#include <QObject>
#include <QFile>
#include <QDir>
#include <QString>
#include <QIODevice>
http_network ::http_network(QObject *parent)
    :QObject(parent),m_reply(0)
{
    m_network = new QNetworkAccessManager(this);
}
http_network::~http_network()
{
    if(m_reply)
    {
//        m_reply->disconnect(this);
        m_reply->deleteLater();
        m_reply = 0;
    }
}


void http_network::download(const QString &url)
{
/*Define Url and Request Variebles*/
    QUrl qurl(url);
    QNetworkRequest request;
//QSslConfiguration config;
    /*Add SSL Protocal on this data transmit:网络通信提供安全及数据完整性的一种安全协议*/
    QSslConfiguration conf = request.sslConfiguration();
    /*We dont need to verify ssl:*/
    conf.setPeerVerifyMode(QSslSocket::VerifyNone);
    /*Set the SSLv3/TLSv1 Protocal Type*/
    conf.setProtocol(QSsl::TlsV1SslV3);
    /*formly set up*/
    request.setSslConfiguration(conf);
    /*Add the url to the request:*/
    request.setUrl(qurl);
    /*if there are reply now,disconnect and delete it.*/
    if(m_reply)
    {
        m_reply->disconnect(this);
        m_reply->deleteLater();
        m_reply = 0;
    }
    m_reply = m_network->get(request);
    /*Consequently operate the following 4 method:*/
    connect(m_reply,SIGNAL(readyRead()),this,SLOT(onReadyRead()));
    connect(m_reply,SIGNAL(error(QNetworkReply::NetworkError)),
            this,SLOT(onError(QNetworkReply::NetworkError)));
    connect(m_reply,SIGNAL(finished()),this,SLOT(onFinished()));
    connect(m_reply,SIGNAL(sslErrors(QList<QSslError>)),
            this,SLOT(onSslError(QList<QSslError>)));
}
 /*loading the image data:*/
void http_network::onReadyRead()
{
    data.append( m_reply->readAll());//图片过大是每次读一点，一定要记得拼接
    qDebug()<<"readyread"<<data.length()<<"byte data"<<endl;
}

void http_network::onError(QNetworkReply::NetworkError error)
{

    m_reply->disconnect(this);
    m_reply->deleteLater();
    m_reply = 0;
    qDebug()<<"http_error"<<error<<endl;
}

 /*Writing to the pre setting's directory:*/
void http_network::onFinished()
{

   QString string = data;
//   QPixmap pixmap;
//   pixmap.loadFromData(data);
   QFile file(QDir::currentPath()+"/network/picname/1.jpg");//文件的名字
   if(file.exists())
   {

      qDebug()<<"file has exinsts"<<endl;
      qDebug()<<data.length()<<endl;

   }else
   {
       QDir dir(QDir::currentPath()+"/network/picname");
       dir.mkpath(QDir::currentPath()+"/network/picname");//创建多级目录
       if(file.open(QFile::WriteOnly))
       {
           file.write(data);
           file.close();
       }
   }



   m_reply->disconnect(this);
   m_reply->deleteLater();
   m_reply = 0;
   qDebug()<<"download finished"<<endl;
}

void http_network::onSslError(QList<QSslError>)
{
    qDebug()<<"sslerror"<<endl;
}
