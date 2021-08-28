#pragma once
#include <nlohmann/json.hpp>
#include <shared_types/RegimeRange.h>

namespace nlohmann {
inline void from_json(const json& j, shared_types::RegimeRange& x) {
    x.setFrom(j.at("from").get<int>());
    x.setTo(j.at("to").get<int>());
}

inline void to_json(json& j, const shared_types::RegimeRange& x) {
    j["from"] = x.from();
    j["to"]   = x.to();
}
} // namespace nlohmann
