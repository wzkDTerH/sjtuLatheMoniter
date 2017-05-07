/********************************************************************************
** Form generated from reading UI file 'machinestatussetting.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MACHINESTATUSSETTING_H
#define UI_MACHINESTATUSSETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MachineStatusSetting
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *MachineStatusSetting)
    {
        if (MachineStatusSetting->objectName().isEmpty())
            MachineStatusSetting->setObjectName(QStringLiteral("MachineStatusSetting"));
        MachineStatusSetting->resize(400, 300);
        pushButton = new QPushButton(MachineStatusSetting);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 150, 93, 28));

        retranslateUi(MachineStatusSetting);

        QMetaObject::connectSlotsByName(MachineStatusSetting);
    } // setupUi

    void retranslateUi(QWidget *MachineStatusSetting)
    {
        MachineStatusSetting->setWindowTitle(QApplication::translate("MachineStatusSetting", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MachineStatusSetting", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MachineStatusSetting: public Ui_MachineStatusSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MACHINESTATUSSETTING_H
