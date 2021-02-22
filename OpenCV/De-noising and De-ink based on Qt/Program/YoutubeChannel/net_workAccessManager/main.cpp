#include <QCoreApplication>
#include "http_network.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    /*Define the class*/
    http_network network;
    network.download("https://timgsa.baidu.com/timg?image&quality=80&size=b9999_10000&sec=1558520418872&di=14b8660d62e3e2a3c6ef7a9b951075de&imgtype=0&src=http%3A%2F%2F5b0988e595225.cdn.sohucs.com%2Fimages%2F20180604%2Fad739a3a928f4206bda7f07db961a8aa.jpg");
    return a.exec();
}
