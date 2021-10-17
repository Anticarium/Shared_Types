#include <shared_types/SensorData.h>

namespace shared_types {

int SensorData::getHumidity() const {
    return humidity_;
}

void SensorData::setHumidity(int newHumidity) {
    humidity_ = newHumidity;
}

} // namespace shared_types
