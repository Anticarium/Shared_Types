#pragma once
#include <nlohmann/json.hpp>
#include <shared_types/Control.h>
#include <shared_types/RegimeValueSerializer.hpp>

namespace nlohmann {
inline void from_json(const json& j, shared_types::Control& x) {
    x.setLightPercentage(j.at("light_percentage").get<int>());
    x.setWindPercentage(j.at("wind_percentage").get<int>());
    x.setRegimeValue(j.at("regime_value").get<shared_types::RegimeValue>());
}

inline void to_json(json& j, const shared_types::Control& x) {
    j["light_percentage"] = x.getLightPercentage();
    j["wind_percentage"]  = x.getWindPercentage();
    j["regime_value"]     = x.getRegimeValue();
}
} // namespace nlohmann
