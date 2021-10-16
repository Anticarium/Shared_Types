#pragma once
#include <shared_types/RegimeValue.h>

namespace shared_types {
class SensorData : public RegimeValue {
  public:
    int getHumidity() const;
    void setHumidity(int newHumidity);

  private:
    int humidity_ = 0;
};
} // namespace shared_types
