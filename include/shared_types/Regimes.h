#pragma once

#include <QString>
#include <vector>

namespace shared_types {
class Regimes {
  public:
    std::vector<QString> getRegimes() const;
    void setRegimes(const std::vector<QString>& regimes);

  private:
    std::vector<QString> regimes_;
};
} // namespace shared_types
