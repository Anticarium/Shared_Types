#include <shared_types/Control.h>

namespace shared_types {
bool Control::isRaining() const {
    return isRaining_;
}

void Control::setIsRaining(bool newIsRaining) {
    isRaining_ = newIsRaining;
}

bool Control::isHeating() const {
    return isHeating_;
}

void Control::setIsHeating(bool newIsHeating) {
    isHeating_ = newIsHeating;
}

int Control::getLightPercentage() const {
    return lightPercentage_;
}

void Control::setLightPercentage(int newLightPercentage) {
    lightPercentage_ = newLightPercentage;
}

int Control::getWindPercentage() const {
    return windPercentage_;
}

void Control::setWindPercentage(int newWindPercentage) {
    windPercentage_ = newWindPercentage;
}

bool Control::isAuto() const {
    return isAuto_;
}

void Control::setIsAuto(bool newIsAuto) {
    isAuto_ = newIsAuto;
}

} // namespace shared_types
