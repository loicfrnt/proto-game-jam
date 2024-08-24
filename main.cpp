#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "game.h"


int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    Game* game  = new Game(&app);
    qmlRegisterSingletonInstance("com.Game", 1, 0, "Game", game);

    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("proto-game-jam-working", "Main");

    return app.exec();
}

#include "main.moc"
