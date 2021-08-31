#include <shared_types/CustomRegime.h>

namespace shared_types {
float CustomRegime::getTemperature() const {
    return temperature_;
}

void CustomRegime::setTemperature(float newTemperature) {
    temperature_ = newTemperature;
}

const QString& CustomRegime::getName() const {
    return name_;
}

void CustomRegime::setName(const QString& newName) {
    name_ = newName;
}

const RegimeProperty& CustomRegime::getRain() const {
    return rain_;
}

void CustomRegime::setRain(const RegimeProperty& newRain) {
    rain_ = newRain;
}

const RegimeProperty& CustomRegime::getLight() const {
    return light_;
}

void CustomRegime::setLight(const RegimeProperty& newLight) {
    light_ = newLight;
}

const RegimeProperty& CustomRegime::getWind() const {
    return wind_;
}

void CustomRegime::setWind(const RegimeProperty& newWind) {
    wind_ = newWind;
}

} // namespace shared_types
