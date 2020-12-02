# sunQT_Cpp
QT CAN bus plugins are used to connect CAN adapters.\
there are already implemented QT CAN bus plugins for "SocketCAN", "PassThruCAN", "SystecCAN", "PeakCAN", "TinyCAN", "VectorCAN".\
The KvarserCAN is a missing part. This project implements the QT CAN plugin for KvarserCAN.\
how to:
1. download qt source codes:
http://download.qt.io/archive/qt/5.9/
2. open qt-everywhere-opensource-src-5.9.1\qtserialbus\qtserialbus.pro with qt-creator.
3. creator plugin sub-project under qt-everywhere-opensource-src-5.9.1\qtserialbus\src\plugins\canbus\
4. build Dlls and place to QT plugins directory
5. qtCanAdapter = QCanBus::instance()->createDevice(pluginName, &errorString);
6. and go


QT CAN BUS description:\
https://doc.qt.io/qt-5/qtcanbus-backends.html
