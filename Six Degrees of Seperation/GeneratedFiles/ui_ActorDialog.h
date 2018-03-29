/********************************************************************************
** Form generated from reading UI file 'ActorDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTORDIALOG_H
#define UI_ACTORDIALOG_H

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

class Ui_ActorDialogClass
{
public:
    QListWidget *ActorsList;
    QLabel *ActorsLabel;
    QPushButton *ViewActorButton;

    void setupUi(QDialog *ActorDialogClass)
    {
        if (ActorDialogClass->objectName().isEmpty())
            ActorDialogClass->setObjectName(QStringLiteral("ActorDialogClass"));
        ActorDialogClass->resize(519, 459);
        ActorsList = new QListWidget(ActorDialogClass);
        ActorsList->setObjectName(QStringLiteral("ActorsList"));
        ActorsList->setGeometry(QRect(110, 90, 301, 261));
        ActorsLabel = new QLabel(ActorDialogClass);
        ActorsLabel->setObjectName(QStringLiteral("ActorsLabel"));
        ActorsLabel->setGeometry(QRect(110, 50, 131, 31));
        ViewActorButton = new QPushButton(ActorDialogClass);
        ViewActorButton->setObjectName(QStringLiteral("ViewActorButton"));
        ViewActorButton->setGeometry(QRect(320, 370, 91, 41));

        retranslateUi(ActorDialogClass);

        QMetaObject::connectSlotsByName(ActorDialogClass);
    } // setupUi

    void retranslateUi(QDialog *ActorDialogClass)
    {
        ActorDialogClass->setWindowTitle(QApplication::translate("ActorDialogClass", "Actors", Q_NULLPTR));
        ActorsLabel->setText(QApplication::translate("ActorDialogClass", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">Actors:</span></p></body></html>", Q_NULLPTR));
        ViewActorButton->setText(QApplication::translate("ActorDialogClass", "View Actor", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ActorDialogClass: public Ui_ActorDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTORDIALOG_H
