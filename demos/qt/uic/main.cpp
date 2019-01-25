#include <QApplication>
#include <QWebEngineView>
#include "main.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication app(argc, argv);

    QWebEngineView view;
    view.setUrl(getlink());
    view.resize(1524, 850);
    view.show();

   return app.exec();

}
