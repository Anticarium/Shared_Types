#include <shared_types/RegimeProperty.h>

namespace shared_types {
int RegimeProperty::value() const {
    return value_;
}

void RegimeProperty::setValue(int newValue) {
    value_ = newValue;
}

bool RegimeProperty::isRandom() const {
    return isRandom_;
}

void RegimeProperty::setIsRandom(bool newIsRandom) {
    isRandom_ = newIsRandom;
}

const RegimeRange& RegimeProperty::getRange() const {
    return range_;
}

void RegimeProperty::setRange(const RegimeRange& newRange) {
    range_ = newRange;
}

} // namespace shared_types
