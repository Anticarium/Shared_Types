#include <shared_types/Regime.h>

namespace shared_types {

const shared_types::RegimeName& Regime::getRegimeName() const {
    return regimeName_;
}

void Regime::setRegimeName(const shared_types::RegimeName& regimeName) {
    regimeName_ = regimeName;
}

const shared_types::RegimeValue& Regime::getRegimeValue() const {
    return regimeValue_;
}

void Regime::setRegimeValue(const shared_types::RegimeValue& regimeValue) {
    regimeValue_ = regimeValue;
}

} // namespace shared_types
