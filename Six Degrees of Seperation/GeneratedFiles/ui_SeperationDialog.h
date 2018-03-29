/********************************************************************************
** Form generated from reading UI file 'SeperationDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEPERATIONDIALOG_H
#define UI_SEPERATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SeperationDialogClass
{
public:
    QListWidget *ActorsList;
    QLabel *ActorListLabel;
    QPushButton *FirstActorButton;
    QPushButton *SecondActorButton;
    QPushButton *beginSearch;

    void setupUi(QDialog *SeperationDialogClass)
    {
        if (SeperationDialogClass->objectName().isEmpty())
            SeperationDialogClass->setObjectName(QStringLiteral("SeperationDialogClass"));
        SeperationDialogClass->resize(293, 391);
        SeperationDialogClass->setWindowTitle(QStringLiteral(""));
        ActorsList = new QListWidget(SeperationDialogClass);
        ActorsList->setObjectName(QStringLiteral("ActorsList"));
        ActorsList->setGeometry(QRect(10, 60, 271, 191));
        ActorListLabel = new QLabel(SeperationDialogClass);
        ActorListLabel->setObjectName(QStringLiteral("ActorListLabel"));
        ActorListLabel->setGeometry(QRect(10, 20, 111, 31));
        FirstActorButton = new QPushButton(SeperationDialogClass);
        FirstActorButton->setObjectName(QStringLiteral("FirstActorButton"));
        FirstActorButton->setGeometry(QRect(10, 260, 111, 51));
        SecondActorButton = new QPushButton(SeperationDialogClass);
        SecondActorButton->setObjectName(QStringLiteral("SecondActorButton"));
        SecondActorButton->setGeometry(QRect(170, 260, 111, 51));
        beginSearch = new QPushButton(SeperationDialogClass);
        beginSearch->setObjectName(QStringLiteral("beginSearch"));
        beginSearch->setGeometry(QRect(100, 330, 91, 51));

        retranslateUi(SeperationDialogClass);

        QMetaObject::connectSlotsByName(SeperationDialogClass);
    } // setupUi

    void retranslateUi(QDialog *SeperationDialogClass)
    {
        ActorListLabel->setText(QApplication::translate("SeperationDialogClass", "<html><head/><body><p><span style=\" font-size:18pt;\">Actor List:</span></p></body></html>", Q_NULLPTR));
        FirstActorButton->setText(QApplication::translate("SeperationDialogClass", "First Actor", Q_NULLPTR));
        SecondActorButton->setText(QApplication::translate("SeperationDialogClass", "Second Actor", Q_NULLPTR));
        beginSearch->setText(QApplication::translate("SeperationDialogClass", "Find Connection", Q_NULLPTR));
        Q_UNUSED(SeperationDialogClass);
    } // retranslateUi

};

namespace Ui {
    class SeperationDialogClass: public Ui_SeperationDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEPERATIONDIALOG_H
