#pragma once
#include <shared_types/RegimeSerializer.hpp>
#include <shared_types/SavedRegimes.h>

namespace nlohmann {
inline void from_json(const json& j, shared_types::SavedRegimes& x) {
    x.setSavedRegimes(j.at("saved_regimes").get<std::vector<shared_types::Regime>>());
}

inline void to_json(json& j, const shared_types::SavedRegimes& x) {
    j["saved_regimes"] = x.getSavedRegimes();
}
} // namespace nlohmann
