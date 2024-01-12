/********************************************************************************
** Form generated from reading UI file 'playersnumber_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYERSNUMBER_DIALOG_H
#define UI_PLAYERSNUMBER_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_playersNumber_Dialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalBox;
    QLabel *textLabel;
    QHBoxLayout *horizontalBox;
    QPushButton *button2Players;
    QPushButton *button3Players;
    QPushButton *button4Players;

    void setupUi(QDialog *playersNumber_Dialog)
    {
        if (playersNumber_Dialog->objectName().isEmpty())
            playersNumber_Dialog->setObjectName(QString::fromUtf8("playersNumber_Dialog"));
        playersNumber_Dialog->resize(340, 110);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        playersNumber_Dialog->setFont(font);
        verticalLayoutWidget = new QWidget(playersNumber_Dialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 325, 91));
        verticalBox = new QVBoxLayout(verticalLayoutWidget);
        verticalBox->setObjectName(QString::fromUtf8("verticalBox"));
        verticalBox->setContentsMargins(0, 0, 0, 0);
        textLabel = new QLabel(verticalLayoutWidget);
        textLabel->setObjectName(QString::fromUtf8("textLabel"));
        textLabel->setFont(font);
        textLabel->setAlignment(Qt::AlignCenter);

        verticalBox->addWidget(textLabel);

        horizontalBox = new QHBoxLayout();
        horizontalBox->setObjectName(QString::fromUtf8("horizontalBox"));
        button2Players = new QPushButton(verticalLayoutWidget);
        button2Players->setObjectName(QString::fromUtf8("button2Players"));
        button2Players->setFont(font);

        horizontalBox->addWidget(button2Players);

        button3Players = new QPushButton(verticalLayoutWidget);
        button3Players->setObjectName(QString::fromUtf8("button3Players"));
        button3Players->setFont(font);

        horizontalBox->addWidget(button3Players);

        button4Players = new QPushButton(verticalLayoutWidget);
        button4Players->setObjectName(QString::fromUtf8("button4Players"));
        button4Players->setFont(font);

        horizontalBox->addWidget(button4Players);


        verticalBox->addLayout(horizontalBox);


        retranslateUi(playersNumber_Dialog);

        QMetaObject::connectSlotsByName(playersNumber_Dialog);
    } // setupUi

    void retranslateUi(QDialog *playersNumber_Dialog)
    {
        playersNumber_Dialog->setWindowTitle(QApplication::translate("playersNumber_Dialog", "Number of players", nullptr));
        textLabel->setText(QApplication::translate("playersNumber_Dialog", "Select the number of players", nullptr));
        button2Players->setText(QApplication::translate("playersNumber_Dialog", "2", nullptr));
        button3Players->setText(QApplication::translate("playersNumber_Dialog", "3", nullptr));
        button4Players->setText(QApplication::translate("playersNumber_Dialog", "4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class playersNumber_Dialog: public Ui_playersNumber_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYERSNUMBER_DIALOG_H
