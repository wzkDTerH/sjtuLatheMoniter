/********************************************************************************
** Form generated from reading UI file 'machinelistitem.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MACHINELISTITEM_H
#define UI_MACHINELISTITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MachineListItem
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *imageLabel;
    QLabel *nameLabel;
    QLabel *statusLabel;

    void setupUi(QWidget *MachineListItem)
    {
        if (MachineListItem->objectName().isEmpty())
            MachineListItem->setObjectName(QStringLiteral("MachineListItem"));
        MachineListItem->resize(400, 300);
        horizontalLayout = new QHBoxLayout(MachineListItem);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        imageLabel = new QLabel(MachineListItem);
        imageLabel->setObjectName(QStringLiteral("imageLabel"));

        horizontalLayout->addWidget(imageLabel);

        nameLabel = new QLabel(MachineListItem);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));

        horizontalLayout->addWidget(nameLabel);

        statusLabel = new QLabel(MachineListItem);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));

        horizontalLayout->addWidget(statusLabel);


        retranslateUi(MachineListItem);

        QMetaObject::connectSlotsByName(MachineListItem);
    } // setupUi

    void retranslateUi(QWidget *MachineListItem)
    {
        MachineListItem->setWindowTitle(QApplication::translate("MachineListItem", "Form", Q_NULLPTR));
        imageLabel->setText(QApplication::translate("MachineListItem", "<html><head/><body><p><img src=\":/resource/machine.png\"/></p></body></html>", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("MachineListItem", "\345\220\215\345\255\227", Q_NULLPTR));
        statusLabel->setText(QApplication::translate("MachineListItem", "\345\233\276\347\211\207", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MachineListItem: public Ui_MachineListItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MACHINELISTITEM_H
