#include "machinelistsetting.h"
#include "ui_machinelistsetting.h"
#include <QScreen>
#include <algorithm>

using namespace std;

MachineListSetting::MachineListSetting(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MachineListSetting)
{
    ui->setupUi(this);
    auto ps=QGuiApplication::primaryScreen();
    auto s=min(ps->geometry().width(),ps->geometry().height());
    ui->backButton->setFixedSize(s/10,s/10);
    ui->backButton->setFont([&](){QFont f;f.setPointSize(s/40);return f;}());
    ui->connectButton->setFixedSize(s/10,s/10);
    ui->connectButton->setFont([&](){QFont f;f.setPointSize(s/40);return f;}());
    ui->ipLabel->setFont([&](){QFont f;f.setPointSize(s/20);return f;}());
    ui->ipLineEdit->setFont([&](){QFont f;f.setPointSize(s/20);return f;}());
    ui->usernameLabel->setFont([&](){QFont f;f.setPointSize(s/20);return f;}());
    ui->usernameLineEdit->setFont([&](){QFont f;f.setPointSize(s/20);return f;}());
    ui->passwordLabel->setFont([&](){QFont f;f.setPointSize(s/20);return f;}());
    ui->passwordLineEdit->setFont([&](){QFont f;f.setPointSize(s/20);return f;}());
    ui->infoLabel->setFont([&](){QFont f;f.setPointSize(s/20);return f;}());
}

MachineListSetting::~MachineListSetting()
{
    delete ui;
}
