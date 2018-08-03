#ifndef KVASERCANBACKENDPRIVATE_H
#define KVASERCANBACKENDPRIVATE_H

#include"kvasercanbackend.h"


QT_BEGIN_NAMESPACE

class QSocketNotifier;
class QWinEventNotifier;
class QTimer;

class KvaserCanBackendPrivate
{
    Q_DECLARE_PUBLIC(KvaserCanBackend)

public:
    KvaserCanBackendPrivate(KvaserCanBackend *q);
    KvaserCanBackend * const q_ptr;
    bool open();
    void close();
    bool setConfigurationParameter(int key, const QVariant &value);
    void setupChannel(const QByteArray &interfaceName);
    void setupDefaultConfigurations();
    QString systemErrorString(int errorCode);
    void startWrite();
    void startRead();
    bool verifyBitRate(int bitrate);
    bool isFlexibleDatarateEnabled = false;
    bool isOpen = false;
    QTimer *writeNotifier = nullptr;


    /*
private:
    KvaserCanBackend * const q_ptr;
    //Q_DECLARE_PUBLIC(KvaserCanBackend);
    */


};

QT_END_NAMESPACE

#endif // KVASERCANBACKENDPRIVATE_H
