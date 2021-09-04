#pragma once
#include <nlohmann/json.hpp>
#include <shared_types/SensorData.h>

namespace nlohmann {
inline void from_json(const json& j, shared_types::SensorData& x) {
    x.setTemperature(j.at("temperature").get<float>());
    x.setHumidity(j.at("humidity").get<int>());
    x.setMoisture(j.at("moisture").get<int>());
}

inline void to_json(json& j, const shared_types::SensorData& x) {
    j["temperature"] = x.getTemperature();
    j["humidity"]    = x.getHumidity();
    j["moisture"]    = x.getMoisture();
}
} // namespace nlohmann
