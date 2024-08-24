#ifndef GAME_H
#define GAME_H

#include <QObject>

class Game : public QObject
{
    Q_OBJECT

    Q_PROPERTY(unsigned int sizeX READ sizeX NOTIFY sizeXChanged FINAL)
    Q_PROPERTY(unsigned int sizeY READ sizeY NOTIFY sizeYChanged FINAL)

    Q_PROPERTY(unsigned long long playerSun READ playerSun NOTIFY playerSunChanged FINAL)

public:
    explicit Game(QObject *parent = nullptr);

    unsigned long long playerSun() const;
    void setPlayerSun(unsigned long long newPlayerSun);

    unsigned int sizeY() const;

    unsigned int sizeX() const;

signals:

    void playerSunChanged();

    void sizeYChanged();

    void sizeXChanged();

private:

    unsigned int m_sizeX = 3;
    unsigned int m_sizeY = 3;

    unsigned long long m_playerSun = 0;
};

#endif // GAME_H
