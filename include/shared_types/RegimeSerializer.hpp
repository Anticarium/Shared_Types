#pragma once
#include <nlohmann/json.hpp>
#include <shared_types/Regime.h>
#include <shared_types/RegimeIdSerializer.hpp>
#include <shared_types/RegimeValueSerializer.hpp>

namespace nlohmann {
inline void from_json(const json& j, shared_types::Regime& x) {
    x.setRegimeId(j.at("regime_id").get<shared_types::RegimeId>());
    x.setRegimeValue(j.at("regime_value").get<shared_types::RegimeValue>());
    x.setName(QString::fromStdString(j.at("name").get<std::string>()));
}

inline void to_json(json& j, const shared_types::Regime& x) {
    j["name"]         = x.getName().toStdString();
    j["regime_value"] = x.getRegimeValue();
    j["regime_id"]    = x.getRegimeId();
}
} // namespace nlohmann
