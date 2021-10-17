#pragma once
#include <QString>
#include <shared_types/RegimeValue.h>

namespace shared_types {
class Control {
  public:
    int getLightPercentage() const;
    void setLightPercentage(int newLightPercentage);
    int getWindPercentage() const;
    void setWindPercentage(int newWindPercentage);
    shared_types::RegimeValue getRegimeValue() const;
    void setRegimeValue(const shared_types::RegimeValue& regimeValue);

  private:
    int lightPercentage_ = 0;
    int windPercentage_  = 0;
    shared_types::RegimeValue regimeValue_;
};
} // namespace shared_types
