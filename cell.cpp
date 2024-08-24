#include "cell.h"

Cell::Cell(QObject *parent)
    : QObject{parent}
{

}

bool Cell::isLocked() const
{
    return m_isLocked;
}

Cell::Cell(bool isLocked) : m_isLocked(isLocked)
{}
