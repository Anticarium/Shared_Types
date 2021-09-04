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
    const QString& getCurrentRegime() const;
    void setCurrentRegime(const QString& newCurrentRegime);

  private:
    Control control_;
    std::vector<CustomRegime> customRegimes_;
    QString currentRegime_ = "";
};
} // namespace shared_types
