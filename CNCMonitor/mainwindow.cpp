#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_machinelistview.h"
#include "ui_machinelistsetting.h"
#include "ui_machinestatussetting.h"
#include "ui_machinestatusview.h"
#include <QVBoxLayout>
#include <QMessageBox>
#include <iostream>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qsw=new QStackedWidget;
    mlv=new MachineListView(0,db);
    msv=new MachineStatusView(0,db);
    mls=new MachineListSetting;
    mss=new MachineStatusSetting;
    qsw->addWidget(mlv);
    qsw->addWidget(msv);
    qsw->addWidget(mls);
    qsw->addWidget(mss);
    setCentralWidget(qsw);
    connect(mlv->ui->settingButton,SIGNAL(clicked()),this,SLOT(showMachineListSetting()));
    connect(mls->ui->backButton,SIGNAL(clicked()),this,SLOT(showMachineListView()));
    connect(mls->ui->connectButton,SIGNAL(clicked(bool)),this,SLOT(connectDatabase()));
    connect(mlv->ui->quitButton,SIGNAL(clicked(bool)),this,SLOT(close()));
    connect(mlv->ui->listView,SIGNAL(currentRowChanged(int)),this,SLOT(showMachineStatusView(int)));
    connect(msv->ui->backButton,SIGNAL(clicked(bool)),this,SLOT(showMachineListView()));
    setWindowState(Qt::WindowFullScreen);
    db=new Database(this);
    connectDatabase();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showMachineListView()
{
    disconnect(mlv->ui->listView,SIGNAL(currentRowChanged(int)),this,SLOT(showMachineStatusView(int)));
    qsw->setCurrentIndex(0);
    mlv->ui->listView->setCurrentRow(-1);
    connect(mlv->ui->listView,SIGNAL(currentRowChanged(int)),this,SLOT(showMachineStatusView(int)));
}
void MainWindow::showMachineStatusView(int idx)
{
    if(idx==-1)
        return;
    msv->updateView(db->statusByIndex(idx));
    mlv->ui->listView->setCurrentRow(-1);
    qsw->setCurrentIndex(1);
}
void MainWindow::showMachineListSetting()
{
    qsw->setCurrentIndex(2);
}
void MainWindow::showMachineStatusSetting()
{
    qsw->setCurrentIndex(3);
}

void MainWindow::connectDatabase(){
    db->setIP(mls->ui->ipLineEdit->text());
    db->setUsername(mls->ui->usernameLineEdit->text());
    db->setPassword(mls->ui->passwordLineEdit->text());
    db->tryConnect();
    if(db->isConnected()){
        mls->ui->infoLabel->setText("已连接");
        mlv->updateView();
    }else{
        mls->ui->infoLabel->setText("未连接");
    }
}
