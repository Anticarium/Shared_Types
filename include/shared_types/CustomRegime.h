#pragma once
#include "RegimeProperty.h"
#include <QString>

namespace shared_types {
class CustomRegime {
  public:
    float getTemperature() const;
    void setTemperature(float newTemperature);
    const QString& getName() const;
    void setName(const QString& newName);
    const RegimeProperty& getRain() const;
    void setRain(const RegimeProperty& newRain);
    const RegimeProperty& getLight() const;
    void setLight(const RegimeProperty& newLight);
    const RegimeProperty& getWind() const;
    void setWind(const RegimeProperty& newWind);

  private:
    float temperature_ = 0;
    QString name_      = "";
    RegimeProperty rain_;
    RegimeProperty light_;
    RegimeProperty wind_;
};
} // namespace shared_types
