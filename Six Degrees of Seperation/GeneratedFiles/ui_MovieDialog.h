/********************************************************************************
** Form generated from reading UI file 'MovieDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOVIEDIALOG_H
#define UI_MOVIEDIALOG_H

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

class Ui_MovieDialogClass
{
public:
    QLabel *MoviesLabel;
    QListWidget *MoviesList;
    QPushButton *ViewMovieButton;

    void setupUi(QDialog *MovieDialogClass)
    {
        if (MovieDialogClass->objectName().isEmpty())
            MovieDialogClass->setObjectName(QStringLiteral("MovieDialogClass"));
        MovieDialogClass->resize(538, 460);
        MoviesLabel = new QLabel(MovieDialogClass);
        MoviesLabel->setObjectName(QStringLiteral("MoviesLabel"));
        MoviesLabel->setGeometry(QRect(110, 40, 101, 41));
        MoviesList = new QListWidget(MovieDialogClass);
        MoviesList->setObjectName(QStringLiteral("MoviesList"));
        MoviesList->setGeometry(QRect(110, 90, 331, 251));
        ViewMovieButton = new QPushButton(MovieDialogClass);
        ViewMovieButton->setObjectName(QStringLiteral("ViewMovieButton"));
        ViewMovieButton->setGeometry(QRect(350, 360, 91, 41));

        retranslateUi(MovieDialogClass);

        QMetaObject::connectSlotsByName(MovieDialogClass);
    } // setupUi

    void retranslateUi(QDialog *MovieDialogClass)
    {
        MovieDialogClass->setWindowTitle(QApplication::translate("MovieDialogClass", "Movies", Q_NULLPTR));
        MoviesLabel->setText(QApplication::translate("MovieDialogClass", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">Movies: </span></p></body></html>", Q_NULLPTR));
        ViewMovieButton->setText(QApplication::translate("MovieDialogClass", "View Movie", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MovieDialogClass: public Ui_MovieDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOVIEDIALOG_H
