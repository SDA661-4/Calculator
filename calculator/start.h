#ifndef START_H
#define START_H

#include <QMainWindow>
#include "mainwindow.h"

namespace Ui {
class Start;
}

class Start : public QMainWindow
{
    Q_OBJECT

public:
    explicit Start(QWidget *parent = 0);
    ~Start();

private:
    Ui::Start *ui;
private slots:
    void opeN();
};

#endif // START_H
