#pragma once

#include <QString>
#include <shared_types/RegimeId.h>
#include <shared_types/RegimeValue.h>

namespace shared_types {
class Regime {
  public:
    QString getName() const;
    void setName(const QString& name);
    const shared_types::RegimeValue& getRegimeValue() const;
    void setRegimeValue(const shared_types::RegimeValue& regimeValue);
    shared_types::RegimeId getRegimeId() const;
    void setRegimeId(const shared_types::RegimeId& regimeId);

  private:
    QString name_;
    shared_types::RegimeId regimeId_;
    shared_types::RegimeValue regimeValue_;
};
} // namespace shared_types
