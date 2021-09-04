#include <shared_types/SensorData.h>

namespace shared_types {

float SensorData::getTemperature() const {
    return temperature_;
}

void SensorData::setTemperature(float newTemperature) {
    temperature_ = newTemperature;
}

int SensorData::getHumidity() const {
    return humidity_;
}

void SensorData::setHumidity(int newHumidity) {
    humidity_ = newHumidity;
}

int SensorData::getMoisture() const {
    return moisture_;
}

void SensorData::setMoisture(int newMoisture) {
    moisture_ = newMoisture;
}

} // namespace shared_types
