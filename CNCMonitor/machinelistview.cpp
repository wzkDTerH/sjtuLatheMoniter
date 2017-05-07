#include "machinelistview.h"
#include "ui_machinelistview.h"
#include <QScreen>
#include <iostream>
#include "machinelistitem.h"

using namespace std;

MachineListView::MachineListView(QWidget *parent,Database*db_) :
    QWidget(parent),
    ui(new Ui::MachineListView),
    db(db_)
{
    ui->setupUi(this);
    auto ps=QGuiApplication::primaryScreen();
    auto s=min(ps->geometry().width(),ps->geometry().height());
    ui->refreshButton->setFixedSize(s/10,s/10);
    ui->refreshButton->setFont([&](){QFont f;f.setPointSize(s/40);return f;}());
    ui->settingButton->setFixedSize(s/10,s/10);
    ui->settingButton->setFont([&](){QFont f;f.setPointSize(s/40);return f;}());
    ui->quitButton->setFixedSize(s/10,s/10);
    ui->quitButton->setFont([&](){QFont f;f.setPointSize(s/40);return f;}());
    ui->label->setFont([&](){QFont f;f.setPointSize(s/20);return f;}());
}

MachineListView::~MachineListView()
{
    delete ui;
}

void MachineListView::updateView()
{
    ui->listView->clear();
    if(db->isConnected()){
        auto ms=db->getAllStatus();
        foreach (auto m, ms) {
            QListWidgetItem *item = new QListWidgetItem(ui->listView);
            auto widget=new MachineListItem(0,m);
            item->setSizeHint(widget->sizeHint());
            ui->listView->addItem(item);
            ui->listView->setItemWidget(item,widget);
        }
    }
}

void MachineListView::on_refreshButton_clicked()
{
    updateView();
}
