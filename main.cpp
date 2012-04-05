#include <QtGui/QApplication>
#include <QApplication>
#include <QWebView>
#include <QUrl>
#include <QDir>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWebView view;
    view.resize(1024, 768);
    view.setStyleSheet("background-color:rgb(150,147,88); padding: 7px ; color:rgb(255,255,255)");
    view.page()->settings()->setAttribute(QWebSettings::PluginsEnabled, true);
    QString browserAppUrl = QString("file://")+QDir::currentPath()+QString("/../isis-browser/index.html");

    QStringList args = a.arguments();
    if (args.count() > 1)
        browserAppUrl += QString("?url=") + args.last();

    view.load(QUrl(browserAppUrl));
    view.show();

    return a.exec();
}
