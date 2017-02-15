#ifndef DATASTORE_H
#define DATASTORE_H

#include <QtGui>
#include <QObject>
#include <iostream>
#include <fcntl.h>
#include <stdio.h>
#include <string>
#include <unistd.h>
#include "datarecord.h"
#include "parser.h"

class DiplayData : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString speedChange  READ getSpeedChange NOTIFY speedChange )
    Q_PROPERTY(QString hourChange   READ getHourChange  NOTIFY hourChange )
    Q_PROPERTY(QString minutChange  READ getMinutChange NOTIFY minutChange )

public:
    explicit DiplayData( QObject* parent = 0);
    QString getSpeedChange();
    QString getHourChange();
    QString getMinutChange();
    //Q_INVOKABLE void someFunction(int i);

signals:
    void speedChange() ;
    void hourChange() ;
    void minutChange() ;

public slots:
    void updateIHM();
    void updateData();

private:
    QTimer *updateIHMTimer;
    QTimer *updateDataTimer;
    DataRecord dataRecord;
    std::string frameBuffer;
};

#endif // DATASTORE_H
