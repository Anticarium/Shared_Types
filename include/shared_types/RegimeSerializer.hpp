#pragma once
#include <nlohmann/json.hpp>
#include <shared_types/Regime.h>
#include <shared_types/RegimeNameSerializer.hpp>
#include <shared_types/RegimeValueSerializer.hpp>

namespace nlohmann {
inline void from_json(const json& j, shared_types::Regime& x) {
    x.setRegimeName(j.at("regime_name").get<shared_types::RegimeName>());
    x.setRegimeValue(j.at("regime_value").get<shared_types::RegimeValue>());
}

inline void to_json(json& j, const shared_types::Regime& x) {
    j["regime_name"]  = x.getRegimeName();
    j["regime_value"] = x.getRegimeValue();
}
} // namespace nlohmann
