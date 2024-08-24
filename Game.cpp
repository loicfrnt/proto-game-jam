#include "Game.h"

Game::Game(QObject *parent)
    : QObject{parent}
{}

unsigned long long Game::playerSun() const
{
    return m_playerSun;
}

unsigned int Game::sizeY() const
{
    return m_sizeY;
}

unsigned int Game::sizeX() const
{
    return m_sizeX;
}
