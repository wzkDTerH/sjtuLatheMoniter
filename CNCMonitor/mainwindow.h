#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>
#include "machinelistview.h"
#include "machinestatusview.h"
#include "machinelistsetting.h"
#include "machinestatussetting.h"
#include "database.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    MachineListView *mlv;
    MachineStatusView *msv;
    MachineListSetting *mls;
    MachineStatusSetting *mss;
    QStackedWidget *qsw;
    Database *db;

private slots:
    void showMachineListView();
    void showMachineStatusView(int idx);
    void showMachineListSetting();
    void showMachineStatusSetting();
    void connectDatabase();
};

#endif // MAINWINDOW_H
