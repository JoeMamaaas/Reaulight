#include "dmxlink.h"
#include <QSerialPort>

bool DMX_link::open(QIODeviceBase::OpenMode mode) {
    return port->open(mode);
}

void DMX_link::close() {
    port->close();
}

void DMX_link::setBaudRate(qint32 x) {
    port->setBaudRate(x);
}

qint32 DMX_link::getBaudRate() {
    return port->baudRate();
}

