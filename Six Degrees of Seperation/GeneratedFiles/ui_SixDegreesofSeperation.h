/********************************************************************************
** Form generated from reading UI file 'SixDegreesofSeperation.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIXDEGREESOFSEPERATION_H
#define UI_SIXDEGREESOFSEPERATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SixDegreesofSeperationClass
{
public:
    QWidget *centralWidget;
    QPushButton *SeperationMenuButton;
    QPushButton *MoviesMenuButton;
    QPushButton *ActorsMenuButton;
    QPushButton *ExitMenuButton;
    QLabel *titleLabel;
    QLabel *informationLabel;
    QLabel *fileStatus;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SixDegreesofSeperationClass)
    {
        if (SixDegreesofSeperationClass->objectName().isEmpty())
            SixDegreesofSeperationClass->setObjectName(QStringLiteral("SixDegreesofSeperationClass"));
        SixDegreesofSeperationClass->resize(619, 459);
        centralWidget = new QWidget(SixDegreesofSeperationClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        SeperationMenuButton = new QPushButton(centralWidget);
        SeperationMenuButton->setObjectName(QStringLiteral("SeperationMenuButton"));
        SeperationMenuButton->setGeometry(QRect(240, 70, 141, 51));
        MoviesMenuButton = new QPushButton(centralWidget);
        MoviesMenuButton->setObjectName(QStringLiteral("MoviesMenuButton"));
        MoviesMenuButton->setGeometry(QRect(240, 140, 141, 51));
        ActorsMenuButton = new QPushButton(centralWidget);
        ActorsMenuButton->setObjectName(QStringLiteral("ActorsMenuButton"));
        ActorsMenuButton->setGeometry(QRect(240, 210, 141, 51));
        ExitMenuButton = new QPushButton(centralWidget);
        ExitMenuButton->setObjectName(QStringLiteral("ExitMenuButton"));
        ExitMenuButton->setGeometry(QRect(240, 280, 141, 51));
        titleLabel = new QLabel(centralWidget);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setGeometry(QRect(80, 10, 481, 51));
        informationLabel = new QLabel(centralWidget);
        informationLabel->setObjectName(QStringLiteral("informationLabel"));
        informationLabel->setGeometry(QRect(10, 290, 221, 101));
        fileStatus = new QLabel(centralWidget);
        fileStatus->setObjectName(QStringLiteral("fileStatus"));
        fileStatus->setGeometry(QRect(520, 380, 81, 16));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(450, 380, 61, 16));
        SixDegreesofSeperationClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SixDegreesofSeperationClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 619, 21));
        SixDegreesofSeperationClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SixDegreesofSeperationClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SixDegreesofSeperationClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SixDegreesofSeperationClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SixDegreesofSeperationClass->setStatusBar(statusBar);

        retranslateUi(SixDegreesofSeperationClass);

        QMetaObject::connectSlotsByName(SixDegreesofSeperationClass);
    } // setupUi

    void retranslateUi(QMainWindow *SixDegreesofSeperationClass)
    {
        SixDegreesofSeperationClass->setWindowTitle(QApplication::translate("SixDegreesofSeperationClass", "SixDegreesofSeperation", Q_NULLPTR));
        SeperationMenuButton->setText(QApplication::translate("SixDegreesofSeperationClass", "Degrees of Seperation", Q_NULLPTR));
        MoviesMenuButton->setText(QApplication::translate("SixDegreesofSeperationClass", "Movies", Q_NULLPTR));
        ActorsMenuButton->setText(QApplication::translate("SixDegreesofSeperationClass", "Actors", Q_NULLPTR));
        ExitMenuButton->setText(QApplication::translate("SixDegreesofSeperationClass", "Exit", Q_NULLPTR));
        titleLabel->setText(QApplication::translate("SixDegreesofSeperationClass", "<html><head/><body><p><span style=\" font-size:26pt; font-weight:600; text-decoration: underline;\">Six Degrees of Seperation</span></p></body></html>", Q_NULLPTR));
        informationLabel->setText(QApplication::translate("SixDegreesofSeperationClass", "<html><head/><body><p>University: Nottingham Trent University</p><p>Student ID: N0633796</p><p>Student Name: Bartlomiej Rembisz</p><p>Module: Software Design and Implementation</p></body></html>", Q_NULLPTR));
        fileStatus->setText(QApplication::translate("SixDegreesofSeperationClass", "Not loaded", Q_NULLPTR));
        label->setText(QApplication::translate("SixDegreesofSeperationClass", "File status:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SixDegreesofSeperationClass: public Ui_SixDegreesofSeperationClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIXDEGREESOFSEPERATION_H
