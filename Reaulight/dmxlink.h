#ifndef DMXLINK_H
#define DMXLINK_H

#include <QSerialPort>

class DMX_link {
public:
    bool open(QIODevice::OpenMode mode);
    void close();
    void setBaudRate(qint32 x);
    qint32 getBaudRate();
private:
    QSerialPort *port;
};

#endif // DMXLINK_H
