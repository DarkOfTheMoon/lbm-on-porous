#include "simulbm.h"
#include "ui_simulbm.h"

SimuLBM::SimuLBM(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SimuLBM)
{
    ui->setupUi(this);
}

SimuLBM::~SimuLBM()
{
    delete ui;
}
