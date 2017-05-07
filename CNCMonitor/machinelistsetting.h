#ifndef MACHINELISTSETTING_H
#define MACHINELISTSETTING_H

#include <QWidget>

namespace Ui {
    class MachineListSetting;
}

class MachineListSetting : public QWidget
{
    Q_OBJECT

public:
    explicit MachineListSetting(QWidget *parent = 0);
    ~MachineListSetting();

public:
    Ui::MachineListSetting *ui;
};

#endif // MACHINELISTSETTING_H
