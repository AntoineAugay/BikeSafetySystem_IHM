#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "displaydata.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    QQmlContext* context = engine.rootContext();
    DiplayData dt;
    context->setContextProperty("displayData", &dt);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
