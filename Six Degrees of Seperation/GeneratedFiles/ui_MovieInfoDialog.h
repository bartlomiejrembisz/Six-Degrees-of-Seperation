/********************************************************************************
** Form generated from reading UI file 'MovieInfoDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOVIEINFODIALOG_H
#define UI_MOVIEINFODIALOG_H

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

class Ui_MovieInfoDialog
{
public:
    QLabel *NameLabel;
    QLabel *releaseDateLabel;
    QLabel *PlotLabel;
    QLabel *RatingLabel;
    QLabel *DirectorsLabel;
    QLabel *GenresLabel;
    QLabel *MovieName;
    QLabel *MovieRating;
    QLabel *MovieReleaseDate;
    QLabel *MovieDirectors;
    QLabel *MovieGenres;
    QLabel *MoviePlot;
    QListWidget *MovieCast;
    QLabel *MovieCastLabel;
    QListWidget *EpisodesList;
    QLabel *EpisodesLabel;
    QPushButton *ViewEpisodeButton;

    void setupUi(QDialog *MovieInfoDialog)
    {
        if (MovieInfoDialog->objectName().isEmpty())
            MovieInfoDialog->setObjectName(QStringLiteral("MovieInfoDialog"));
        MovieInfoDialog->resize(578, 607);
        NameLabel = new QLabel(MovieInfoDialog);
        NameLabel->setObjectName(QStringLiteral("NameLabel"));
        NameLabel->setGeometry(QRect(70, 40, 41, 16));
        releaseDateLabel = new QLabel(MovieInfoDialog);
        releaseDateLabel->setObjectName(QStringLiteral("releaseDateLabel"));
        releaseDateLabel->setGeometry(QRect(40, 100, 68, 16));
        PlotLabel = new QLabel(MovieInfoDialog);
        PlotLabel->setObjectName(QStringLiteral("PlotLabel"));
        PlotLabel->setGeometry(QRect(80, 210, 31, 16));
        RatingLabel = new QLabel(MovieInfoDialog);
        RatingLabel->setObjectName(QStringLiteral("RatingLabel"));
        RatingLabel->setGeometry(QRect(70, 65, 41, 21));
        DirectorsLabel = new QLabel(MovieInfoDialog);
        DirectorsLabel->setObjectName(QStringLiteral("DirectorsLabel"));
        DirectorsLabel->setGeometry(QRect(60, 150, 47, 16));
        GenresLabel = new QLabel(MovieInfoDialog);
        GenresLabel->setObjectName(QStringLiteral("GenresLabel"));
        GenresLabel->setGeometry(QRect(70, 180, 41, 21));
        MovieName = new QLabel(MovieInfoDialog);
        MovieName->setObjectName(QStringLiteral("MovieName"));
        MovieName->setGeometry(QRect(120, 40, 411, 20));
        MovieRating = new QLabel(MovieInfoDialog);
        MovieRating->setObjectName(QStringLiteral("MovieRating"));
        MovieRating->setGeometry(QRect(120, 60, 61, 31));
        MovieReleaseDate = new QLabel(MovieInfoDialog);
        MovieReleaseDate->setObjectName(QStringLiteral("MovieReleaseDate"));
        MovieReleaseDate->setGeometry(QRect(120, 90, 451, 31));
        MovieDirectors = new QLabel(MovieInfoDialog);
        MovieDirectors->setObjectName(QStringLiteral("MovieDirectors"));
        MovieDirectors->setGeometry(QRect(120, 150, 311, 16));
        MovieGenres = new QLabel(MovieInfoDialog);
        MovieGenres->setObjectName(QStringLiteral("MovieGenres"));
        MovieGenres->setGeometry(QRect(120, 180, 271, 21));
        MoviePlot = new QLabel(MovieInfoDialog);
        MoviePlot->setObjectName(QStringLiteral("MoviePlot"));
        MoviePlot->setGeometry(QRect(110, 210, 411, 121));
        MovieCast = new QListWidget(MovieInfoDialog);
        MovieCast->setObjectName(QStringLiteral("MovieCast"));
        MovieCast->setGeometry(QRect(90, 360, 181, 171));
        MovieCastLabel = new QLabel(MovieInfoDialog);
        MovieCastLabel->setObjectName(QStringLiteral("MovieCastLabel"));
        MovieCastLabel->setGeometry(QRect(30, 360, 61, 16));
        EpisodesList = new QListWidget(MovieInfoDialog);
        EpisodesList->setObjectName(QStringLiteral("EpisodesList"));
        EpisodesList->setGeometry(QRect(370, 360, 181, 171));
        EpisodesLabel = new QLabel(MovieInfoDialog);
        EpisodesLabel->setObjectName(QStringLiteral("EpisodesLabel"));
        EpisodesLabel->setGeometry(QRect(310, 360, 47, 13));
        ViewEpisodeButton = new QPushButton(MovieInfoDialog);
        ViewEpisodeButton->setObjectName(QStringLiteral("ViewEpisodeButton"));
        ViewEpisodeButton->setGeometry(QRect(464, 542, 81, 31));

        retranslateUi(MovieInfoDialog);

        QMetaObject::connectSlotsByName(MovieInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *MovieInfoDialog)
    {
        MovieInfoDialog->setWindowTitle(QApplication::translate("MovieInfoDialog", "Movie Information", Q_NULLPTR));
        NameLabel->setText(QApplication::translate("MovieInfoDialog", "Name:", Q_NULLPTR));
        releaseDateLabel->setText(QApplication::translate("MovieInfoDialog", "<html><head/><body><p>Release Date:</p><p><br/></p></body></html>", Q_NULLPTR));
        PlotLabel->setText(QApplication::translate("MovieInfoDialog", "Plot:", Q_NULLPTR));
        RatingLabel->setText(QApplication::translate("MovieInfoDialog", "Rating:", Q_NULLPTR));
        DirectorsLabel->setText(QApplication::translate("MovieInfoDialog", "Directors:", Q_NULLPTR));
        GenresLabel->setText(QApplication::translate("MovieInfoDialog", "Genres:", Q_NULLPTR));
        MovieName->setText(QString());
        MovieRating->setText(QString());
        MovieReleaseDate->setText(QString());
        MovieDirectors->setText(QString());
        MovieGenres->setText(QString());
        MoviePlot->setText(QString());
        MovieCastLabel->setText(QApplication::translate("MovieInfoDialog", "Movie Cast:", Q_NULLPTR));
        EpisodesLabel->setText(QApplication::translate("MovieInfoDialog", "Episodes:", Q_NULLPTR));
        ViewEpisodeButton->setText(QApplication::translate("MovieInfoDialog", "View Episode", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MovieInfoDialog: public Ui_MovieInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOVIEINFODIALOG_H
