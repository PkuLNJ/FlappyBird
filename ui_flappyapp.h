/********************************************************************************
** Form generated from reading UI file 'flappyapp.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLAPPYAPP_H
#define UI_FLAPPYAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FlappyApp
{
public:
    QPushButton *playGame;
    QPushButton *Option;
    QPushButton *HelpBtn;
    QPushButton *exitBtn;

    void setupUi(QWidget *FlappyApp)
    {
        if (FlappyApp->objectName().isEmpty())
            FlappyApp->setObjectName(QStringLiteral("FlappyApp"));
        FlappyApp->resize(400, 683);
        playGame = new QPushButton(FlappyApp);
        playGame->setObjectName(QStringLiteral("playGame"));
        playGame->setGeometry(QRect(160, 470, 93, 28));
        Option = new QPushButton(FlappyApp);
        Option->setObjectName(QStringLiteral("Option"));
        Option->setGeometry(QRect(160, 510, 93, 28));
        HelpBtn = new QPushButton(FlappyApp);
        HelpBtn->setObjectName(QStringLiteral("HelpBtn"));
        HelpBtn->setGeometry(QRect(160, 540, 93, 28));
        exitBtn = new QPushButton(FlappyApp);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));
        exitBtn->setGeometry(QRect(160, 590, 93, 28));

        retranslateUi(FlappyApp);

        QMetaObject::connectSlotsByName(FlappyApp);
    } // setupUi

    void retranslateUi(QWidget *FlappyApp)
    {
        FlappyApp->setWindowTitle(QApplication::translate("FlappyApp", "FlappyApp", nullptr));
        playGame->setText(QApplication::translate("FlappyApp", "Play!", nullptr));
        Option->setText(QApplication::translate("FlappyApp", "Options", nullptr));
        HelpBtn->setText(QApplication::translate("FlappyApp", "Help", nullptr));
        exitBtn->setText(QApplication::translate("FlappyApp", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FlappyApp: public Ui_FlappyApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLAPPYAPP_H
