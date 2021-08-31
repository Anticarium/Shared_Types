#pragma once
#include <nlohmann/json.hpp>
#include <shared_types/RegimeProperty.h>
#include <shared_types/RegimeRangeSerializer.hpp>

namespace nlohmann {
inline void from_json(const json& j, shared_types::RegimeProperty& x) {
    x.setValue(j.at("value").get<int>());
    x.setIsRandom(j.at("is_random").get<bool>());
    x.setRange(j.at("range").get<shared_types::RegimeRange>());
}

inline void to_json(json& j, const shared_types::RegimeProperty& x) {
    j["value"]     = x.value();
    j["is_random"] = x.isRandom();
    j["range"]     = x.getRange();
}
} // namespace nlohmann
