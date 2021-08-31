#include <shared_types/TerrariumData.h>

namespace shared_types {
const Control& TerrariumData::getControl() const {
    return control_;
}

void TerrariumData::setControl(const Control& newControl) {
    control_ = newControl;
}

const std::vector<CustomRegime>& TerrariumData::getCustomRegimes() const {
    return customRegimes_;
}

void TerrariumData::setCustomRegimes(const std::vector<CustomRegime>& newCustomRegimes) {
    customRegimes_ = newCustomRegimes;
}
} // namespace shared_types
