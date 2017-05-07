/********************************************************************************
** Form generated from reading UI file 'machinestatusview.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MACHINESTATUSVIEW_H
#define UI_MACHINESTATUSVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MachineStatusView
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *textLabel;
    QSpacerItem *horizontalSpacer;
    QPushButton *refreshButton;
    QPushButton *settingButton;
    QPushButton *backButton;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_1;
    QLabel *nameLabel;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_12;
    QLabel *workshopLabel;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLabel *xLabel;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLabel *yLabel;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLabel *zLabel;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QLabel *infoLabel;
    QComboBox *comboBox;
    QWidget *widget;

    void setupUi(QWidget *MachineStatusView)
    {
        if (MachineStatusView->objectName().isEmpty())
            MachineStatusView->setObjectName(QStringLiteral("MachineStatusView"));
        MachineStatusView->resize(400, 300);
        verticalLayout = new QVBoxLayout(MachineStatusView);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        textLabel = new QLabel(MachineStatusView);
        textLabel->setObjectName(QStringLiteral("textLabel"));

        horizontalLayout->addWidget(textLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        refreshButton = new QPushButton(MachineStatusView);
        refreshButton->setObjectName(QStringLiteral("refreshButton"));

        horizontalLayout->addWidget(refreshButton);

        settingButton = new QPushButton(MachineStatusView);
        settingButton->setObjectName(QStringLiteral("settingButton"));

        horizontalLayout->addWidget(settingButton);

        backButton = new QPushButton(MachineStatusView);
        backButton->setObjectName(QStringLiteral("backButton"));

        horizontalLayout->addWidget(backButton);


        verticalLayout->addLayout(horizontalLayout);

        label_6 = new QLabel(MachineStatusView);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_1 = new QLabel(MachineStatusView);
        label_1->setObjectName(QStringLiteral("label_1"));

        horizontalLayout_2->addWidget(label_1);

        nameLabel = new QLabel(MachineStatusView);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));

        horizontalLayout_2->addWidget(nameLabel);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_12 = new QLabel(MachineStatusView);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_7->addWidget(label_12);

        workshopLabel = new QLabel(MachineStatusView);
        workshopLabel->setObjectName(QStringLiteral("workshopLabel"));

        horizontalLayout_7->addWidget(workshopLabel);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(MachineStatusView);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        xLabel = new QLabel(MachineStatusView);
        xLabel->setObjectName(QStringLiteral("xLabel"));

        horizontalLayout_3->addWidget(xLabel);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(MachineStatusView);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        yLabel = new QLabel(MachineStatusView);
        yLabel->setObjectName(QStringLiteral("yLabel"));

        horizontalLayout_4->addWidget(yLabel);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_4 = new QLabel(MachineStatusView);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_5->addWidget(label_4);

        zLabel = new QLabel(MachineStatusView);
        zLabel->setObjectName(QStringLiteral("zLabel"));

        horizontalLayout_5->addWidget(zLabel);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_7 = new QLabel(MachineStatusView);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_6->addWidget(label_7);

        infoLabel = new QLabel(MachineStatusView);
        infoLabel->setObjectName(QStringLiteral("infoLabel"));

        horizontalLayout_6->addWidget(infoLabel);


        verticalLayout->addLayout(horizontalLayout_6);

        comboBox = new QComboBox(MachineStatusView);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout->addWidget(comboBox);

        widget = new QWidget(MachineStatusView);
        widget->setObjectName(QStringLiteral("widget"));

        verticalLayout->addWidget(widget);


        retranslateUi(MachineStatusView);

        QMetaObject::connectSlotsByName(MachineStatusView);
    } // setupUi

    void retranslateUi(QWidget *MachineStatusView)
    {
        MachineStatusView->setWindowTitle(QApplication::translate("MachineStatusView", "Form", 0));
        textLabel->setText(QApplication::translate("MachineStatusView", "SIEMENS", 0));
        refreshButton->setText(QApplication::translate("MachineStatusView", "\345\210\267\346\226\260", 0));
        settingButton->setText(QApplication::translate("MachineStatusView", "\350\256\276\347\275\256", 0));
        backButton->setText(QApplication::translate("MachineStatusView", "\350\277\224\345\233\236", 0));
        label_6->setText(QApplication::translate("MachineStatusView", "<html><head/><body><p align=\"center\"><img src=\":/resource/machine2.png\"/></p></body></html>", 0));
        label_1->setText(QApplication::translate("MachineStatusView", "\346\234\272\345\272\212\345\220\215\357\274\232", 0));
        nameLabel->setText(QApplication::translate("MachineStatusView", "TextLabel", 0));
        label_12->setText(QApplication::translate("MachineStatusView", "\350\275\246\351\227\264\357\274\232", 0));
        workshopLabel->setText(QApplication::translate("MachineStatusView", "TextLabel", 0));
        label_2->setText(QApplication::translate("MachineStatusView", "X\345\235\220\346\240\207\357\274\232", 0));
        xLabel->setText(QApplication::translate("MachineStatusView", "TextLabel", 0));
        label_3->setText(QApplication::translate("MachineStatusView", "Y\345\235\220\346\240\207\357\274\232", 0));
        yLabel->setText(QApplication::translate("MachineStatusView", "TextLabel", 0));
        label_4->setText(QApplication::translate("MachineStatusView", "Z\345\235\220\346\240\207\357\274\232", 0));
        zLabel->setText(QApplication::translate("MachineStatusView", "TextLabel", 0));
        label_7->setText(QApplication::translate("MachineStatusView", "\346\212\245\350\255\246\344\277\241\346\201\257\357\274\232", 0));
        infoLabel->setText(QApplication::translate("MachineStatusView", "TextLabel", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MachineStatusView", "\345\210\207\345\211\212\351\200\237\345\272\246", 0)
         << QApplication::translate("MachineStatusView", "\344\270\273\350\275\264\350\275\254\351\200\237", 0)
         << QApplication::translate("MachineStatusView", "\344\270\273\350\275\264\350\264\237\350\275\275", 0)
         << QApplication::translate("MachineStatusView", "\344\270\273\350\275\264\347\224\265\346\265\201", 0)
         << QApplication::translate("MachineStatusView", "\344\270\273\350\275\264\347\224\265\345\216\213", 0)
         << QApplication::translate("MachineStatusView", "\344\270\273\350\275\264\346\270\251\345\272\246", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class MachineStatusView: public Ui_MachineStatusView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MACHINESTATUSVIEW_H
