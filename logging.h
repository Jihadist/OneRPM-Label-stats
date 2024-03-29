#pragma once

#include <QDateTime>
#include <QFile>
#include <QLoggingCategory>

Q_DECLARE_LOGGING_CATEGORY(logDebug)
Q_DECLARE_LOGGING_CATEGORY(logInfo)
Q_DECLARE_LOGGING_CATEGORY(logWarning)
Q_DECLARE_LOGGING_CATEGORY(logCritical)

class Logging {
public:
  Logging() = delete;

  void static messageHandler(QtMsgType type, const QMessageLogContext &context,
                             const QString &msg);
};
