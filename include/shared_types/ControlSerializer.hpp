#pragma once
#include <nlohmann/json.hpp>
#include <shared_types/Control.h>

namespace nlohmann {
inline void from_json(const json& j, shared_types::Control& x) {
    x.setIsAuto(j.at("auto_status").get<bool>());
    x.setIsHeating(j.at("heat_status").get<bool>());
    x.setIsRaining(j.at("rain_status").get<bool>());
    x.setLightPercentage(j.at("light_percentage").get<int>());
    x.setWindPercentage(j.at("wind_percentage").get<int>());
}

inline void to_json(json& j, const shared_types::Control& x) {
    j["auto_status"]      = x.isAuto();
    j["heat_status"]      = x.isHeating();
    j["rain_status"]      = x.isRaining();
    j["light_percentage"] = x.getLightPercentage();
    j["wind_percentage"]  = x.getWindPercentage();
}
} // namespace nlohmann
