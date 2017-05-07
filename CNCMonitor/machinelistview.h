#ifndef MACHINELISTVIEW_H
#define MACHINELISTVIEW_H

#include <QWidget>
#include "database.h"

namespace Ui {
    class MachineListView;
}

class MachineListView : public QWidget
{
    Q_OBJECT

public:
    explicit MachineListView(QWidget *parent,Database*db_);
    ~MachineListView();
    void updateView();

public:
    Ui::MachineListView *ui;

private slots:
    void on_refreshButton_clicked();

private:
    Database*db;
};

#endif // MACHINELISTVIEW_H
