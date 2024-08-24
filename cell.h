#ifndef CELL_H
#define CELL_H

#include <QObject>

class Cell : public QObject
{
    Q_OBJECT

    Q_PROPERTY(bool isLocked READ isLocked NOTIFY isLockedChanged FINAL)

public:
    explicit Cell(QObject *parent = nullptr);
    Cell(bool isLocked = true);
    bool isLocked() const;

signals:
    void isLockedChanged();

private:
    bool m_isLocked;
};

#endif // CELL_H
