#include "machinestatusview.h"
#include "ui_machinestatusview.h"
#include <QScreen>
#include <algorithm>

using namespace std;

MachineStatusView::MachineStatusView(QWidget *parent, Database *db_) :
    QWidget(parent),
    ui(new Ui::MachineStatusView)
{
    db=db_;
    ui->setupUi(this);
    auto ps=QGuiApplication::primaryScreen();
    auto s=min(ps->geometry().width(),ps->geometry().height());
    ui->refreshButton->setFixedSize(s/10,s/10);
    ui->refreshButton->setFont([&](){QFont f;f.setPointSize(s/40);return f;}());
    ui->settingButton->setFixedSize(s/10,s/10);
    ui->settingButton->setFont([&](){QFont f;f.setPointSize(s/40);return f;}());
    ui->backButton->setFixedSize(s/10,s/10);
    ui->backButton->setFont([&](){QFont f;f.setPointSize(s/40);return f;}());
    ui->textLabel->setFont([&](){QFont f;f.setPointSize(s/40);return f;}());
    ui->label_1->setFont([&](){QFont f;f.setPointSize(s/40);return f;}());
    ui->label_2->setFont([&](){QFont f;f.setPointSize(s/40);return f;}());
    ui->label_3->setFont([&](){QFont f;f.setPointSize(s/40);return f;}());
    ui->label_4->setFont([&](){QFont f;f.setPointSize(s/40);return f;}());
    ui->label_7->setFont([&](){QFont f;f.setPointSize(s/40);return f;}());
    ui->label_12->setFont([&](){QFont f;f.setPointSize(s/40);return f;}());
    ui->nameLabel->setFont([&](){QFont f;f.setPointSize(s/40);return f;}());
    ui->xLabel->setFont([&](){QFont f;f.setPointSize(s/40);return f;}());
    ui->yLabel->setFont([&](){QFont f;f.setPointSize(s/40);return f;}());
    ui->zLabel->setFont([&](){QFont f;f.setPointSize(s/40);return f;}());
    ui->infoLabel->setFont([&](){QFont f;f.setPointSize(s/40);return f;}());
    ui->workshopLabel->setFont([&](){QFont f;f.setPointSize(s/40);return f;}());
    ui->comboBox->setFont([&](){QFont f;f.setPointSize(s/40);return f;}());
}

MachineStatusView::~MachineStatusView()
{
    delete ui;
}

void MachineStatusView::updateView(MachineStatus s){
    ui->nameLabel->setText(s.machineName);
    ui->workshopLabel->setText(s.workshop);
    ui->xLabel->setText(QString::number(s.x));
    ui->yLabel->setText(QString::number(s.y));
    ui->zLabel->setText(QString::number(s.z));
    ui->infoLabel->setText(s.information);
}
