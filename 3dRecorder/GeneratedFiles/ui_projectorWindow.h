/********************************************************************************
** Form generated from reading UI file 'projectorWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTORWINDOW_H
#define UI_PROJECTORWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProjectorWindow
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ProjectorWindow)
    {
        if (ProjectorWindow->objectName().isEmpty())
            ProjectorWindow->setObjectName(QStringLiteral("ProjectorWindow"));
        ProjectorWindow->resize(640, 480);
        centralwidget = new QWidget(ProjectorWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        ProjectorWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ProjectorWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 640, 21));
        ProjectorWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ProjectorWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        ProjectorWindow->setStatusBar(statusbar);

        retranslateUi(ProjectorWindow);

        QMetaObject::connectSlotsByName(ProjectorWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ProjectorWindow)
    {
        ProjectorWindow->setWindowTitle(QApplication::translate("ProjectorWindow", "MainWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ProjectorWindow: public Ui_ProjectorWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTORWINDOW_H
