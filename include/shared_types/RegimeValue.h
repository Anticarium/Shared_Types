#pragma once

namespace shared_types {
class RegimeValue {
  public:
    float getTemperature() const;
    void setTemperature(float newTemperature);
    int getMoisture() const;
    void setMoisture(int newMoisture);

  private:
    float temperature_ = 0.0f;
    int moisture_      = 0;
};
} // namespace shared_types
