#include "KvaserCanbackend.h"
#include "kvasercanbackend_p.h"
//#include "KvaserCan_symbols_p.h"
#include <QtSerialBus/qcanbusdevice.h>
#include <QtCore/qtimer.h>
#include <QtCore/qcoreevent.h>
#include <QtCore/qloggingcategory.h>
#include <algorithm>
#ifdef Q_OS_WIN32
#   include <QtCore/qwineventnotifier.h>
#else
#   include <QtCore/qsocketnotifier.h>
#endif
QT_BEGIN_NAMESPACE
Q_DECLARE_LOGGING_CATEGORY(QT_CANBUS_PLUGINS_KvaserCan)

bool KvaserCanBackend::canCreate(QString *errorReason)
{
#ifdef LINK_LIBPCANBASIC
    return true;
#else

    return true;
#endif
}

QList<QCanBusDeviceInfo> KvaserCanBackend::interfaces()
{
    QList<QCanBusDeviceInfo> result;
    int stat = 0;
    int channels = 0;
/*
    canInitializeLibrary();
    stat = canGetNumberOfChannels(&channels);
    if (stat < canOK) {
      //qDebug(QString("canGetNumberOfChannels() failed, %1").arg(can_handle));
      return result;
    }

    for (int i=0; i<channels; i++) {
      char name[64];
      stat = canGetChannelData(i, canCHANNELDATA_CHANNEL_NAME, name, sizeof(name));
      result.append(std::move(createDeviceInfo(QLatin1String(name), false, false)));
    }
    */
    result.append(std::move(createDeviceInfo(QLatin1String("kvaserCan001"), false, false)));
    return result;
}



KvaserCanBackendPrivate::KvaserCanBackendPrivate(KvaserCanBackend *q)
    : q_ptr(q)
{
}


bool KvaserCanBackendPrivate::open()
{
    Q_Q(KvaserCanBackend);

    return true;
}
void KvaserCanBackendPrivate::close()
{
    Q_Q(KvaserCanBackend);

}
void KvaserCanBackendPrivate::setupChannel(const QByteArray &interfaceName)
{


}
// Calls only when the device is closed
void KvaserCanBackendPrivate::setupDefaultConfigurations()
{
    Q_Q(KvaserCanBackend);

}


void KvaserCanBackendPrivate::startWrite()
{
    Q_Q(KvaserCanBackend);


}
void KvaserCanBackendPrivate::startRead()
{
    Q_Q(KvaserCanBackend);

}
bool KvaserCanBackendPrivate::verifyBitRate(int bitrate)
{
    Q_Q(KvaserCanBackend);

    return true;
}

KvaserCanBackend::KvaserCanBackend(const QString &name, QObject *parent)
    : QCanBusDevice(parent)
    ,d_ptr(new KvaserCanBackendPrivate(this))
{
    Q_D(KvaserCanBackend);

}

KvaserCanBackend::~KvaserCanBackend()
{
    Q_D(KvaserCanBackend);
    delete d_ptr;
}


bool KvaserCanBackend::open()
{
    Q_D(KvaserCanBackend);

    return true;
}
void KvaserCanBackend::close()
{
    Q_D(KvaserCanBackend);

}
void KvaserCanBackend::setConfigurationParameter(int key, const QVariant &value)
{
    Q_D(KvaserCanBackend);

}
bool KvaserCanBackend::writeFrame(const QCanBusFrame &newData)
{
    Q_D(KvaserCanBackend);

    return true;
}
bool KvaserCanBackend::waitForFramesWritten(int msecs)
{
    return true;
}
bool KvaserCanBackend::waitForFramesReceived(int msecs)
{
   return true;
}

// TODO: Implement me
QString KvaserCanBackend::interpretErrorFrame(const QCanBusFrame &errorFrame)
{
    Q_UNUSED(errorFrame);
    return QString(" ");
}


QT_END_NAMESPACE
