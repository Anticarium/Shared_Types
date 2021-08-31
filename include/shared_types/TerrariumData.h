#pragma once
#include <shared_types/Control.h>
#include <shared_types/CustomRegime.h>
#include <vector>

namespace shared_types {
class TerrariumData {
  public:
    const Control& getControl() const;
    void setControl(const Control& newControl);
    const std::vector<CustomRegime>& getCustomRegimes() const;
    void setCustomRegimes(const std::vector<CustomRegime>& newCustomRegimes);

  private:
    Control control_;
    std::vector<CustomRegime> customRegimes_;
};
} // namespace shared_types
