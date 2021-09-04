#pragma once
#include <QString>

namespace shared_types {
class Control {
  public:
    bool isRaining() const;
    void setIsRaining(bool newIsRaining);
    bool isHeating() const;
    void setIsHeating(bool newIsHeating);
    int getLightPercentage() const;
    void setLightPercentage(int newLightPercentage);
    int getWindPercentage() const;
    void setWindPercentage(int newWindPercentage);
    bool isAuto() const;
    void setIsAuto(bool newIsAuto);

  private:
    bool isRaining_      = false;
    bool isHeating_      = false;
    int lightPercentage_ = 0;
    int windPercentage_  = 0;
    bool isAuto_         = false;
};
} // namespace shared_types
