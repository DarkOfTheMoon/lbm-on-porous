#ifndef SIMULBM_H
#define SIMULBM_H

#include <QMainWindow>

namespace Ui {
    class SimuLBM;
}

class SimuLBM : public QMainWindow
{
    Q_OBJECT

public:
    explicit SimuLBM(QWidget *parent = 0);
    ~SimuLBM();

private:
    Ui::SimuLBM *ui;
};

#endif // SIMULBM_H
