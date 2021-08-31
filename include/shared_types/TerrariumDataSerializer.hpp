#pragma once
#include <nlohmann/json.hpp>
#include <shared_types/ControlSerializer.hpp>
#include <shared_types/CustomRegimeSerializer.hpp>
#include <shared_types/TerrariumData.h>

namespace nlohmann {
inline void from_json(const json& j, shared_types::TerrariumData& x) {
    x.setControl(j.at("control").get<shared_types::Control>());
    x.setCustomRegimes(j.at("custom_regimes").get<std::vector<shared_types::CustomRegime>>());
}

inline void to_json(json& j, const shared_types::TerrariumData& x) {
    j["control"]        = x.getControl();
    j["custom_regimes"] = x.getCustomRegimes();
}
} // namespace nlohmann
