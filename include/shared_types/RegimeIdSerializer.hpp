#pragma once
#include <nlohmann/json.hpp>
#include <shared_types/RegimeId.h>

namespace nlohmann {
inline void from_json(const json& j, shared_types::RegimeId& x) {
    x.setId(j.at("id").get<int>());
}

inline void to_json(json& j, const shared_types::RegimeId& x) {
    j["id"] = x.getId();
}
} // namespace nlohmann
