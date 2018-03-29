/********************************************************************************
** Form generated from reading UI file 'EpisodeInfoDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EPISODEINFODIALOG_H
#define UI_EPISODEINFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_EpisodeInfoDialog
{
public:
    QLabel *EpisodeInfoLabel;

    void setupUi(QDialog *EpisodeInfoDialog)
    {
        if (EpisodeInfoDialog->objectName().isEmpty())
            EpisodeInfoDialog->setObjectName(QStringLiteral("EpisodeInfoDialog"));
        EpisodeInfoDialog->resize(535, 281);
        EpisodeInfoLabel = new QLabel(EpisodeInfoDialog);
        EpisodeInfoLabel->setObjectName(QStringLiteral("EpisodeInfoLabel"));
        EpisodeInfoLabel->setGeometry(QRect(10, 10, 511, 241));

        retranslateUi(EpisodeInfoDialog);

        QMetaObject::connectSlotsByName(EpisodeInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *EpisodeInfoDialog)
    {
        EpisodeInfoDialog->setWindowTitle(QApplication::translate("EpisodeInfoDialog", "Episode Info", Q_NULLPTR));
        EpisodeInfoLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class EpisodeInfoDialog: public Ui_EpisodeInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EPISODEINFODIALOG_H
