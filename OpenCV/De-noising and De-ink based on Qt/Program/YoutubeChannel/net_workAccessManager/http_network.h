#ifndef HTTP_NETWORK_H
#define HTTP_NETWORK_H
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QUrl>


class http_network : public QObject
{
    Q_OBJECT
public:
    http_network(QObject *parent = 0);
    ~http_network();

    void download(const QString &url);
public slots:
    /*Some Construct Method:*/
    void onReadyRead();
    void onError(QNetworkReply::NetworkError error);
    void onFinished();
    void onSslError(QList<QSslError>);

private:
    QNetworkAccessManager *m_network;
    QNetworkReply *m_reply;
    QByteArray data;
};



#endif // HTTP_NETWORK_H
