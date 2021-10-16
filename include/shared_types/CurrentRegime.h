#pragma once

#include <QString>

namespace shared_types {
class CurrentRegime {
  public:
    QString getCurrentRegime() const;
    void setCurrentRegime(const QString& regime);

  private:
    QString regime_;
};
} // namespace shared_types
