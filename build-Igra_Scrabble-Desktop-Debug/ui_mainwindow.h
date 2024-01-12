/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *board_gridLayout;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *nameLabel;
    QLabel *scoreLabel;
    QLabel *handLabel;
    QGridLayout *hand_gridLayout;
    QHBoxLayout *horizontal_gridLayout;
    QPushButton *repeatTurn_pushButton;
    QPushButton *endTurn_pushButton;
    QPushButton *suggestion_pushButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(850, 600);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 40, 271, 231));
        board_gridLayout = new QGridLayout(gridLayoutWidget);
        board_gridLayout->setSpacing(0);
        board_gridLayout->setObjectName(QString::fromUtf8("board_gridLayout"));
        board_gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(310, 40, 502, 281));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        nameLabel = new QLabel(verticalLayoutWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        QPalette palette;
        QBrush brush(QColor(246, 245, 244, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(190, 190, 190, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        nameLabel->setPalette(palette);
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        nameLabel->setFont(font1);
        nameLabel->setAlignment(Qt::AlignCenter);
        nameLabel->setMargin(4);

        verticalLayout->addWidget(nameLabel);

        scoreLabel = new QLabel(verticalLayoutWidget);
        scoreLabel->setObjectName(QString::fromUtf8("scoreLabel"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        scoreLabel->setPalette(palette1);
        scoreLabel->setFont(font1);
        scoreLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(scoreLabel);

        handLabel = new QLabel(verticalLayoutWidget);
        handLabel->setObjectName(QString::fromUtf8("handLabel"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        handLabel->setPalette(palette2);
        handLabel->setFont(font1);
        handLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(handLabel);

        hand_gridLayout = new QGridLayout();
        hand_gridLayout->setSpacing(6);
        hand_gridLayout->setObjectName(QString::fromUtf8("hand_gridLayout"));
        hand_gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        hand_gridLayout->setContentsMargins(0, 3, 0, 6);

        verticalLayout->addLayout(hand_gridLayout);

        horizontal_gridLayout = new QHBoxLayout();
        horizontal_gridLayout->setObjectName(QString::fromUtf8("horizontal_gridLayout"));
        horizontal_gridLayout->setContentsMargins(-1, 6, -1, 7);
        repeatTurn_pushButton = new QPushButton(verticalLayoutWidget);
        repeatTurn_pushButton->setObjectName(QString::fromUtf8("repeatTurn_pushButton"));
        repeatTurn_pushButton->setMinimumSize(QSize(0, 50));
        repeatTurn_pushButton->setFont(font);

        horizontal_gridLayout->addWidget(repeatTurn_pushButton);

        endTurn_pushButton = new QPushButton(verticalLayoutWidget);
        endTurn_pushButton->setObjectName(QString::fromUtf8("endTurn_pushButton"));
        endTurn_pushButton->setMinimumSize(QSize(0, 50));

        horizontal_gridLayout->addWidget(endTurn_pushButton);


        verticalLayout->addLayout(horizontal_gridLayout);

        suggestion_pushButton = new QPushButton(verticalLayoutWidget);
        suggestion_pushButton->setObjectName(QString::fromUtf8("suggestion_pushButton"));
        suggestion_pushButton->setMinimumSize(QSize(0, 50));

        verticalLayout->addWidget(suggestion_pushButton);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Scrabble", nullptr));
        nameLabel->setText(QApplication::translate("MainWindow", "Ovde stoji ime", nullptr));
        scoreLabel->setText(QApplication::translate("MainWindow", "Ovde ce biti prikazivan rezultat", nullptr));
        handLabel->setText(QApplication::translate("MainWindow", "Hand:", nullptr));
        repeatTurn_pushButton->setText(QApplication::translate("MainWindow", "Repeat your turn", nullptr));
        endTurn_pushButton->setText(QApplication::translate("MainWindow", "Finish your turn", nullptr));
        suggestion_pushButton->setText(QApplication::translate("MainWindow", "Suggestion", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
