#include <shared_types/Regime.h>

namespace shared_types {
QString Regime::getRegime() const {
    return regime_;
}
void Regime::setRegime(const QString& regime) {
    regime_ = regime;
}
} // namespace shared_types
