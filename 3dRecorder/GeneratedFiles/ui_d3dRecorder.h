/********************************************************************************
** Form generated from reading UI file 'd3dRecorder.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_D3DRECORDER_H
#define UI_D3DRECORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_d3dRecorderClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *d3dRecorderClass)
    {
        if (d3dRecorderClass->objectName().isEmpty())
            d3dRecorderClass->setObjectName(QStringLiteral("d3dRecorderClass"));
        d3dRecorderClass->resize(600, 400);
        menuBar = new QMenuBar(d3dRecorderClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        d3dRecorderClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(d3dRecorderClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        d3dRecorderClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(d3dRecorderClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        d3dRecorderClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(d3dRecorderClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        d3dRecorderClass->setStatusBar(statusBar);

        retranslateUi(d3dRecorderClass);

        QMetaObject::connectSlotsByName(d3dRecorderClass);
    } // setupUi

    void retranslateUi(QMainWindow *d3dRecorderClass)
    {
        d3dRecorderClass->setWindowTitle(QApplication::translate("d3dRecorderClass", "d3dRecorder", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class d3dRecorderClass: public Ui_d3dRecorderClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_D3DRECORDER_H
