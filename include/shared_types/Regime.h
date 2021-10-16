#pragma once

#include <shared_types/RegimeName.h>
#include <shared_types/RegimeValue.h>

namespace shared_types {
class Regime {
  public:
    const shared_types::RegimeName& getRegimeName() const;
    void setRegimeName(const shared_types::RegimeName& regimeName);
    const shared_types::RegimeValue& getRegimeValue() const;
    void setRegimeValue(const shared_types::RegimeValue& regimeValue);

  private:
    shared_types::RegimeName regimeName_;
    shared_types::RegimeValue regimeValue_;
};
} // namespace shared_types
