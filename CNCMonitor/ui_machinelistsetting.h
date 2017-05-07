/********************************************************************************
** Form generated from reading UI file 'machinelistsetting.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MACHINELISTSETTING_H
#define UI_MACHINELISTSETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MachineListSetting
{
public:
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *ipLabel;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *ipLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *usernameLabel;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *usernameLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *passwordLabel;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *passwordLineEdit;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *backButton;
    QSpacerItem *horizontalSpacer;
    QLabel *infoLabel;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *connectButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *MachineListSetting)
    {
        if (MachineListSetting->objectName().isEmpty())
            MachineListSetting->setObjectName(QStringLiteral("MachineListSetting"));
        MachineListSetting->resize(400, 300);
        horizontalLayout_5 = new QHBoxLayout(MachineListSetting);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        ipLabel = new QLabel(MachineListSetting);
        ipLabel->setObjectName(QStringLiteral("ipLabel"));

        horizontalLayout->addWidget(ipLabel);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        ipLineEdit = new QLineEdit(MachineListSetting);
        ipLineEdit->setObjectName(QStringLiteral("ipLineEdit"));

        horizontalLayout->addWidget(ipLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        usernameLabel = new QLabel(MachineListSetting);
        usernameLabel->setObjectName(QStringLiteral("usernameLabel"));

        horizontalLayout_2->addWidget(usernameLabel);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        usernameLineEdit = new QLineEdit(MachineListSetting);
        usernameLineEdit->setObjectName(QStringLiteral("usernameLineEdit"));

        horizontalLayout_2->addWidget(usernameLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        passwordLabel = new QLabel(MachineListSetting);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));

        horizontalLayout_3->addWidget(passwordLabel);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        passwordLineEdit = new QLineEdit(MachineListSetting);
        passwordLineEdit->setObjectName(QStringLiteral("passwordLineEdit"));

        horizontalLayout_3->addWidget(passwordLineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        backButton = new QPushButton(MachineListSetting);
        backButton->setObjectName(QStringLiteral("backButton"));

        horizontalLayout_4->addWidget(backButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        infoLabel = new QLabel(MachineListSetting);
        infoLabel->setObjectName(QStringLiteral("infoLabel"));

        horizontalLayout_4->addWidget(infoLabel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        connectButton = new QPushButton(MachineListSetting);
        connectButton->setObjectName(QStringLiteral("connectButton"));

        horizontalLayout_4->addWidget(connectButton);


        verticalLayout->addLayout(horizontalLayout_4);


        horizontalLayout_5->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        retranslateUi(MachineListSetting);

        QMetaObject::connectSlotsByName(MachineListSetting);
    } // setupUi

    void retranslateUi(QWidget *MachineListSetting)
    {
        MachineListSetting->setWindowTitle(QApplication::translate("MachineListSetting", "Form", Q_NULLPTR));
        ipLabel->setText(QApplication::translate("MachineListSetting", "IP\345\234\260\345\235\200\357\274\232", Q_NULLPTR));
        ipLineEdit->setText(QApplication::translate("MachineListSetting", "0.0.0.0", Q_NULLPTR));
        usernameLabel->setText(QApplication::translate("MachineListSetting", "\347\224\250\346\210\267\345\220\215\357\274\232", Q_NULLPTR));
        usernameLineEdit->setText(QApplication::translate("MachineListSetting", "admin", Q_NULLPTR));
        passwordLabel->setText(QApplication::translate("MachineListSetting", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        passwordLineEdit->setText(QApplication::translate("MachineListSetting", "123456", Q_NULLPTR));
        backButton->setText(QApplication::translate("MachineListSetting", "\350\277\224\345\233\236", Q_NULLPTR));
        infoLabel->setText(QApplication::translate("MachineListSetting", "\346\234\252\350\277\236\346\216\245", Q_NULLPTR));
        connectButton->setText(QApplication::translate("MachineListSetting", "\350\277\236\346\216\245", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MachineListSetting: public Ui_MachineListSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MACHINELISTSETTING_H
