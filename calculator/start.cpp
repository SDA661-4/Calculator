#include "start.h"
#include "ui_start.h"
#include "mainwindow.h"
MainWindow* openWind;

Start::Start(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Start)
{
    ui->setupUi(this);
    openWind=new MainWindow();
    connect(ui->actioncalculator,SIGNAL(triggered()),this,SLOT(opeN()));
    ui->actionexit,SIGNAL(close()),this;

}
void Start::opeN()
{
openWind->show();
}

Start::~Start()
{
    delete ui;
}
