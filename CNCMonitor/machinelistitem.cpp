#include "machinelistitem.h"
#include "ui_machinelistitem.h"
#include <QScreen>
#include <algorithm>

using namespace std;

MachineListItem::MachineListItem(QWidget *parent,MachineStatus ss) :
    QWidget(parent),
    ui(new Ui::MachineListItem)
{
    ui->setupUi(this);
    auto ps=QGuiApplication::primaryScreen();
    auto s=min(ps->geometry().width(),ps->geometry().height());
    auto w=ui->imageLabel->sizeHint().width();
    auto h=ui->imageLabel->sizeHint().height();
    ui->imageLabel->setFixedSize(s/10,s/10.0*h/w);
    ui->nameLabel->setFont([&](){QFont f;f.setPointSize(s/20);return f;}());
    ui->statusLabel->setFont([&](){QFont f;f.setPointSize(s/20);return f;}());
    if(ss.isWorking){
        ui->statusLabel->setText("正常");
    }else{
        ui->statusLabel->setText("错误");
    }
    ui->nameLabel->setText(ss.machineName);
}

MachineListItem::~MachineListItem()
{
    delete ui;
}
