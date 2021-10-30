#include <shared_types/Regime.h>

namespace shared_types {

QString Regime::getName() const {
    return name_;
}
void Regime::setName(const QString& name) {
    name_ = name;
}

const shared_types::RegimeValue& Regime::getRegimeValue() const {
    return regimeValue_;
}

void Regime::setRegimeValue(const shared_types::RegimeValue& regimeValue) {
    regimeValue_ = regimeValue;
}

shared_types::RegimeId Regime::getRegimeId() const {
    return regimeId_;
}

void Regime::setRegimeId(const shared_types::RegimeId& regimeId) {
    regimeId_ = regimeId;
}

} // namespace shared_types
