/********************************************************************************
** Form generated from reading UI file 'ActorInfoDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTORINFODIALOG_H
#define UI_ACTORINFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_ActorInfoDialog
{
public:
    QLabel *NameLabel;
    QLabel *ActorNameLabel;
    QListWidget *MovieList;
    QListWidget *AquintancesList;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *ActorInfoDialog)
    {
        if (ActorInfoDialog->objectName().isEmpty())
            ActorInfoDialog->setObjectName(QStringLiteral("ActorInfoDialog"));
        ActorInfoDialog->resize(491, 305);
        NameLabel = new QLabel(ActorInfoDialog);
        NameLabel->setObjectName(QStringLiteral("NameLabel"));
        NameLabel->setGeometry(QRect(20, 24, 47, 13));
        ActorNameLabel = new QLabel(ActorInfoDialog);
        ActorNameLabel->setObjectName(QStringLiteral("ActorNameLabel"));
        ActorNameLabel->setGeometry(QRect(60, 20, 111, 20));
        MovieList = new QListWidget(ActorInfoDialog);
        MovieList->setObjectName(QStringLiteral("MovieList"));
        MovieList->setGeometry(QRect(20, 90, 211, 171));
        AquintancesList = new QListWidget(ActorInfoDialog);
        AquintancesList->setObjectName(QStringLiteral("AquintancesList"));
        AquintancesList->setGeometry(QRect(260, 90, 211, 171));
        label = new QLabel(ActorInfoDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 70, 47, 13));
        label_2 = new QLabel(ActorInfoDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(260, 70, 47, 13));

        retranslateUi(ActorInfoDialog);

        QMetaObject::connectSlotsByName(ActorInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *ActorInfoDialog)
    {
        ActorInfoDialog->setWindowTitle(QApplication::translate("ActorInfoDialog", "Actor Information", Q_NULLPTR));
        NameLabel->setText(QApplication::translate("ActorInfoDialog", "<html><head/><body><p>Name:</p></body></html>", Q_NULLPTR));
        ActorNameLabel->setText(QString());
        label->setText(QApplication::translate("ActorInfoDialog", "Movies:", Q_NULLPTR));
        label_2->setText(QApplication::translate("ActorInfoDialog", "Actors:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ActorInfoDialog: public Ui_ActorInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTORINFODIALOG_H
