#pragma once
#include "RegimeRange.h"

namespace shared_types {
class RegimeProperty {
  public:
    int value() const;
    void setValue(int newValue);
    bool isRandom() const;
    void setIsRandom(bool newIsRandom);
    const RegimeRange& getRange() const;
    void setRange(const RegimeRange& newRange);

  private:
    int value_     = 0;
    bool isRandom_ = false;
    RegimeRange range_;
};
} // namespace shared_types
