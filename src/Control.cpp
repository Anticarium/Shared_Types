#include <shared_types/Control.h>

namespace shared_types {

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

shared_types::RegimeValue Control::getRegimeValue() const {
    return regimeValue_;
}

void Control::setRegimeValue(const shared_types::RegimeValue& regimeValue) {
    regimeValue_ = regimeValue;
}


} // namespace shared_types
