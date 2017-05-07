#ifndef DATABASE_H
#define DATABASE_H

#include <QObject>
#include <QString>
#include "machinestatus.h"
#include <QVector>

class Database : public QObject
{
    Q_OBJECT
public:
    explicit Database(QObject *parent = 0);
    bool isConnected();
    void setIP(QString ip_);
    void setUsername(QString username_);
    void setPassword(QString password_);
    QString getIP();
    QString getUsername();
    QString getPassword();
    void tryConnect();
    QVector<MachineStatus>getAllStatus();
    MachineStatus statusByIndex(int idx);
private:
    QString ip,username,password;

signals:

public slots:
};

#endif // DATABASE_H
