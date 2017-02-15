#include "displaydata.h"

DiplayData::DiplayData(QObject *parent) : QObject(parent)
{
    updateIHMTimer = new QTimer(this);
    updateDataTimer = new QTimer(this);

    frameBuffer = "";

    dataRecord.hour = "--";
    dataRecord.hourUpdate = true;
    dataRecord.minut = "--";
    dataRecord.minutUpdate = true;
    dataRecord.speed = "--";
    dataRecord.speedUpdate = true;

    updateIHMTimer->start(1000);
    updateDataTimer->start(500);

    connect(updateIHMTimer, SIGNAL (timeout()), this, SLOT (updateIHM()));
    connect(updateDataTimer, SIGNAL (timeout()), this, SLOT (updateData()));
}

QString DiplayData::getHourChange() {
    dataRecord.hourUpdate = false;
    return dataRecord.hour;
}

QString DiplayData::getMinutChange() {
    dataRecord.minutUpdate = false;
    return dataRecord.minut;
}

QString DiplayData::getSpeedChange() {
    dataRecord.speedUpdate = false;
    return dataRecord.speed;
}

/*
void DiplayData::someFunction() {

    if ( i == 0) {
        theValue = 0;
        speed = "15";
    }
    if (i == 1) {
        theValue = 1;
        speed = "12";
    }
    //emit speedChange(i);
}
*/

void DiplayData::updateIHM() {

    if(dataRecord.hourUpdate){
        emit hourChange();
    }
    if(dataRecord.minutUpdate){
        emit minutChange();
    }
    if(dataRecord.speedUpdate){
        emit speedChange();
    }
}

void DiplayData::updateData() {

    fd_set set;
    struct timeval timeout = {0,100000}; //timeout of 100 ms.
    int ret = -1;

    char buffer[128];
    int fd = fileno(stdin);

    FD_ZERO(&set);
    FD_SET(fd, &set);

    while ( ret != 0 ) {

        timeout = {0,100000};
        ret = select(FD_SETSIZE, &set, NULL, NULL, &timeout);

        if( ret ) {

            if ( read(fd, buffer, 128) ){
                frameBuffer += buffer;
            }
        }
    }

    unsigned long posEndFrame = frameBuffer.find('\n');

    if(posEndFrame != std::string::npos){

        std::string frame = frameBuffer.substr(0, posEndFrame);
        std::cout << "Frame : " << frame << std::endl;
        frameBuffer.erase(0, posEndFrame+1);

        Parser::extractData(dataRecord,frame);
    }

}
