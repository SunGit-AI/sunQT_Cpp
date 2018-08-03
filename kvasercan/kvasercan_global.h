#ifndef KVASERCAN_GLOBAL_H
#define KVASERCAN_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(KVASERCAN_LIBRARY)
#  define KVASERCANSHARED_EXPORT Q_DECL_EXPORT
#else
#  define KVASERCANSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // KVASERCAN_GLOBAL_H
