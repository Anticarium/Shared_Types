#pragma once
#include <nlohmann/json.hpp>
#include <shared_types/CustomRegime.h>
#include <shared_types/RegimePropertySerializer.hpp>

namespace nlohmann {
inline void from_json(const json& j, shared_types::CustomRegime& x) {
    x.setTemperature(j.at("temperature").get<float>());
    x.setName(QString::fromStdString(j.at("name").get<std::string>()));
    x.setRain(j.at("rain").get<shared_types::RegimeProperty>());
    x.setWind(j.at("wind").get<shared_types::RegimeProperty>());
    x.setLight(j.at("light").get<shared_types::RegimeProperty>());
}

inline void to_json(json& j, const shared_types::CustomRegime& x) {
    j["temperature"] = x.getTemperature();
    j["name"]        = x.getName().toStdString();
    j["rain"]        = x.getRain();
    j["wind"]        = x.getWind();
    j["light"]       = x.getLight();
}
} // namespace nlohmann
