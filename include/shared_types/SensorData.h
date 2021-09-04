#pragma once

namespace shared_types {
class SensorData {
  public:
    float getTemperature() const;
    void setTemperature(float newTemperature);
    int getHumidity() const;
    void setHumidity(int newHumidity);
    int getMoisture() const;
    void setMoisture(int newMoisture);

  private:
    float temperature_ = 0.0f;
    int humidity_      = 0;
    int moisture_      = 0;
};
} // namespace shared_types
