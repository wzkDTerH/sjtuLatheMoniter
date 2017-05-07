#include "database.h"

Database::Database(QObject *parent) : QObject(parent)
{
}

bool Database::isConnected(){
    return true;
}

void Database::tryConnect(){

}

void Database::setIP(QString ip_){
    ip=ip_;
}

void Database::setUsername(QString username_){
    username=username_;
}

void Database::setPassword(QString password_){
    password=password_;
}

QString Database::getIP(){
    return ip;
}

QString Database::getUsername(){
    return username;
}

QString Database::getPassword(){
    return password;
}

MachineStatus Database::statusByIndex(int idx){
    QVector<MachineStatus>r;
    for(int i=0;i<20;++i){
        MachineStatus s;
        s.machineName=QString("CNCM")+QString::number(i+1);
        s.workshop=QString::number((i+1)*(i+1))+"#Workshop";
        s.x=9.5;
        s.y=7.1;
        s.z=1.6;
        s.information="A003";
        s.isWorking=true;
        r.push_back(s);
        if(i==idx)
            return s;
    }
}

QVector<MachineStatus>Database::getAllStatus(){
    QVector<MachineStatus>r;
    for(int i=0;i<20;++i){
        MachineStatus s;
        s.machineName=QString("CNCM")+QString::number(i+1);
        s.workshop=QString::number((i+1)*(i+1))+"#Workshop";
        s.x=9.5;
        s.y=7.1;
        s.z=1.6;
        s.information="A003";
        s.isWorking=true;
        r.push_back(s);
    }
    return r;
}
