#ifndef MACHINESTATUSSETTING_H
#define MACHINESTATUSSETTING_H

#include <QWidget>

namespace Ui {
    class MachineStatusSetting;
}

class MachineStatusSetting : public QWidget
{
    Q_OBJECT

public:
    explicit MachineStatusSetting(QWidget *parent = 0);
    ~MachineStatusSetting();

public:
    Ui::MachineStatusSetting *ui;
};

#endif // MACHINESTATUSSETTING_H
