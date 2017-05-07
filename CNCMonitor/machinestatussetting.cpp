#include "machinestatussetting.h"
#include "ui_machinestatussetting.h"

MachineStatusSetting::MachineStatusSetting(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MachineStatusSetting)
{
    ui->setupUi(this);
}

MachineStatusSetting::~MachineStatusSetting()
{
    delete ui;
}
