#ifndef KVASERCANBACKEND_H
#define KVASERCANBACKEND_H

#include "kvasercan_global.h"

#include"canlib.h"

#include<QtSerialBus/QCanBusDevice>
#include<QtSerialBus/QCanBusFrame>

QT_BEGIN_NAMESPACE

class KvaserCanBackendPrivate;
class KvaserCanBackend : public QCanBusDevice
{
    Q_OBJECT
    Q_DECLARE_PRIVATE(KvaserCanBackend)
    Q_DISABLE_COPY(KvaserCanBackend)
public:
    explicit KvaserCanBackend(const QString &name, QObject *parent = nullptr);

    ~KvaserCanBackend();

    bool open() override;
    void close() override;
    void setConfigurationParameter(int key, const QVariant &value) override;
    bool writeFrame(const QCanBusFrame &newData) override;
    bool waitForFramesWritten(int msecs) override;
    bool waitForFramesReceived(int msecs) override;
    QString interpretErrorFrame(const QCanBusFrame &errorFrame) override;
    static bool canCreate(QString *errorReason);
    static QList<QCanBusDeviceInfo> interfaces();

private:

    CanHandle can_handle;

    KvaserCanBackendPrivate * const d_ptr;
    //Q_DECLARE_PRIVATE(KvaserCanBackend);
    //KvaserCanBackend(KvaserCanBackendPrivate &d);
};

QT_END_NAMESPACE

#endif // KVASERCANBACKEND_H
