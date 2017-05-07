#ifndef MACHINESTATUS_H
#define MACHINESTATUS_H

#include <QObject>

class MachineStatus
{
public:
    QString machineName;
    bool isWorking;
    QString workshop;
    double x,y,z;
    QString information;
};

#endif // MACHINESTATUS_H
