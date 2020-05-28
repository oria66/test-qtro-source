#include <QCoreApplication>
#include "simpleswitch.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    SimpleSwitch srcSwitch; // create simple switch

    QRemoteObjectHost srcNode(QUrl(QStringLiteral("local:switch"))); // create host node without Registry
    srcNode.enableRemoting(&srcSwitch); // enable remoting/sharing

    return a.exec();
}
