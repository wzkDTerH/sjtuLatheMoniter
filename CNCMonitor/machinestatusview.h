#ifndef MACHINESTATUSVIEW_H
#define MACHINESTATUSVIEW_H

#include <QWidget>
#include "database.h"

namespace Ui {
    class MachineStatusView;
}

class MachineStatusView : public QWidget
{
    Q_OBJECT

public:
    explicit MachineStatusView(QWidget *parent,Database*db);
    ~MachineStatusView();
    void updateView(MachineStatus s);

public:
    Ui::MachineStatusView *ui;
    Database*db;
};

#endif // MACHINESTATUSVIEW_H
