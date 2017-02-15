#ifndef DATARECORD_H
#define DATARECORD_H

#include <QString>

class DataRecord
{
public:
    DataRecord();

    QString speed;
    bool speedUpdate;
    QString hour;
    bool hourUpdate;
    QString minut;
    bool minutUpdate;
};

#endif // DATARECORD_H
