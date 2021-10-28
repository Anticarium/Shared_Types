#include <shared_types/SavedRegimes.h>

namespace shared_types {

std::vector<shared_types::Regime> SavedRegimes::getSavedRegimes() const {
    return savedRegimes_;
}

void SavedRegimes::setSavedRegimes(const std::vector<shared_types::Regime>& savedRegimes) {
    savedRegimes_ = savedRegimes;
}

} // namespace shared_types
