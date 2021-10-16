#pragma once

#include <QString>

namespace shared_types {
class RegimeName {
  public:
    QString getName() const;
    void setName(const QString& regimeName);

  private:
    QString regimeName_;
};
} // namespace shared_types
