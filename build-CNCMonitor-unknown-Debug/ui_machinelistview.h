/********************************************************************************
** Form generated from reading UI file 'machinelistview.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MACHINELISTVIEW_H
#define UI_MACHINELISTVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MachineListView
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *refreshButton;
    QPushButton *settingButton;
    QPushButton *quitButton;
    QListWidget *listView;

    void setupUi(QWidget *MachineListView)
    {
        if (MachineListView->objectName().isEmpty())
            MachineListView->setObjectName(QStringLiteral("MachineListView"));
        MachineListView->resize(400, 300);
        verticalLayout = new QVBoxLayout(MachineListView);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(MachineListView);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        refreshButton = new QPushButton(MachineListView);
        refreshButton->setObjectName(QStringLiteral("refreshButton"));

        horizontalLayout->addWidget(refreshButton);

        settingButton = new QPushButton(MachineListView);
        settingButton->setObjectName(QStringLiteral("settingButton"));

        horizontalLayout->addWidget(settingButton);

        quitButton = new QPushButton(MachineListView);
        quitButton->setObjectName(QStringLiteral("quitButton"));

        horizontalLayout->addWidget(quitButton);


        verticalLayout->addLayout(horizontalLayout);

        listView = new QListWidget(MachineListView);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setAutoScrollMargin(20);

        verticalLayout->addWidget(listView);


        retranslateUi(MachineListView);

        QMetaObject::connectSlotsByName(MachineListView);
    } // setupUi

    void retranslateUi(QWidget *MachineListView)
    {
        MachineListView->setWindowTitle(QApplication::translate("MachineListView", "Form", 0));
        label->setText(QApplication::translate("MachineListView", "SIEMENS", 0));
        refreshButton->setText(QApplication::translate("MachineListView", "\345\210\267\346\226\260", 0));
        settingButton->setText(QApplication::translate("MachineListView", "\350\256\276\347\275\256", 0));
        quitButton->setText(QApplication::translate("MachineListView", "\351\200\200\345\207\272", 0));
    } // retranslateUi

};

namespace Ui {
    class MachineListView: public Ui_MachineListView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MACHINELISTVIEW_H
