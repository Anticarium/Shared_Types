#pragma once

#include <QString>

namespace shared_types {
class Regime {
  public:
    QString getRegime() const;
    void setRegime(const QString& regime);

  private:
    QString regime_;
};
} // namespace shared_types
