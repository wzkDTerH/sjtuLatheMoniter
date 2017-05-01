#include "devlistwindow.h"
#include "ui_devlistwindow.h"

devListWindow::devListWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::devListWindow)
{
    ui->setupUi(this);
}

devListWindow::~devListWindow()
{
    delete ui;
}
