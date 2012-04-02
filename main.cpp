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
    view.load(QUrl(QString("file://")+QDir::currentPath()+QString("/../isis-browser/index.html")));
    view.show();

    return a.exec();
}
