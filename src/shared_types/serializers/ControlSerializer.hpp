#pragma once
#include "models/Control.h"
#include <nlohmann/json.hpp>

inline void from_json(const nlohmann::json& j, shared_types::Control& x) {
    nlohmann::json controlJson = j.at("Control");
    x.setIsAuto(controlJson["auto_status"].get<bool>());
    x.setIsHeating(controlJson["heat_status"].get<bool>());
    x.setIsRaining(controlJson["rain_status"].get<bool>());
    x.setLightPercentage(controlJson["light_percentage"].get<int>());
    x.setWindPercentage(controlJson["wind_percentage"].get<int>());
}

inline void to_json(nlohmann::json& j, const shared_types::Control& x) {
    nlohmann::json controlJson;
    controlJson["auto_status"]      = x.isAuto();
    controlJson["heat_status"]      = x.isHeating();
    controlJson["rain_status"]      = x.isRaining();
    controlJson["light_percentage"] = x.getLightPercentage();
    controlJson["wind_percentage"]  = x.getWindPercentage();
    j["Control"]                    = controlJson;
}
