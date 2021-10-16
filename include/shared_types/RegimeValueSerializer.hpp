#pragma once
#include <nlohmann/json.hpp>
#include <shared_types/RegimeValue.h>

namespace nlohmann {
inline void from_json(const json& j, shared_types::RegimeValue& x) {
    x.setTemperature(j.at("temperature").get<float>());
    x.setMoisture(j.at("moisture").get<int>());
}

inline void to_json(json& j, const shared_types::RegimeValue& x) {
    j["temperature"] = x.getTemperature();
    j["moisture"]    = x.getMoisture();
}
} // namespace nlohmann
