#include <shared_types/Regimes.h>

namespace shared_types {
std::vector<QString> Regimes::getRegimes() const {
    return regimes_;
}
void Regimes::setRegimes(const std::vector<QString>& regimes) {
    regimes_ = regimes;
}
} // namespace shared_types
