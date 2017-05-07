#ifndef MACHINELISTITEM_H
#define MACHINELISTITEM_H

#include <QWidget>
#include "machinestatus.h"

namespace Ui {
class MachineListItem;
}

class MachineListItem : public QWidget
{
    Q_OBJECT

public:
    explicit MachineListItem(QWidget *parent,MachineStatus s);
    ~MachineListItem();

private:
    Ui::MachineListItem *ui;
};

#endif // MACHINELISTITEM_H
