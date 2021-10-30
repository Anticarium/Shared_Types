#pragma once

#include <shared_types/Regime.h>
#include <vector>

namespace shared_types {
class SavedRegimes {
  public:
    std::vector<shared_types::Regime> getSavedRegimes() const;
    void setSavedRegimes(const std::vector<shared_types::Regime>& savedRegimes);

  private:
    std::vector<shared_types::Regime> savedRegimes_;
};
} // namespace shared_types
