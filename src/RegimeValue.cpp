#include <shared_types/RegimeValue.h>

namespace shared_types {

float RegimeValue::getTemperature() const {
    return temperature_;
}

void RegimeValue::setTemperature(float newTemperature) {
    temperature_ = newTemperature;
}

int RegimeValue::getMoisture() const {
    return moisture_;
}

void RegimeValue::setMoisture(int newMoisture) {
    moisture_ = newMoisture;
}

} // namespace shared_types
