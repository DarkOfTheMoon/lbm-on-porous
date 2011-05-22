/********************************************************************************
** Form generated from reading UI file 'simulbm.ui'
**
** Created: Sun May 22 14:09:14 2011
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMULBM_H
#define UI_SIMULBM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SimuLBM
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SimuLBM)
    {
        if (SimuLBM->objectName().isEmpty())
            SimuLBM->setObjectName(QString::fromUtf8("SimuLBM"));
        SimuLBM->resize(400, 300);
        menuBar = new QMenuBar(SimuLBM);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        SimuLBM->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SimuLBM);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        SimuLBM->addToolBar(mainToolBar);
        centralWidget = new QWidget(SimuLBM);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        SimuLBM->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(SimuLBM);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        SimuLBM->setStatusBar(statusBar);

        retranslateUi(SimuLBM);

        QMetaObject::connectSlotsByName(SimuLBM);
    } // setupUi

    void retranslateUi(QMainWindow *SimuLBM)
    {
        SimuLBM->setWindowTitle(QApplication::translate("SimuLBM", "SimuLBM", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SimuLBM: public Ui_SimuLBM {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMULBM_H
