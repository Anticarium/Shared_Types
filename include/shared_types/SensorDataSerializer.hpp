#pragma once
#include <nlohmann/json.hpp>
#include <shared_types/RegimeValueSerializer.hpp>
#include <shared_types/SensorData.h>

namespace nlohmann {
inline void from_json(const json& j, shared_types::SensorData& x) {
    shared_types::RegimeValue* regimeValue = &x;

    *regimeValue = j;

    x.setHumidity(j.at("humidity").get<int>());
}

inline void to_json(json& j, const shared_types::SensorData& x) {
    j = static_cast<shared_types::RegimeValue>(x);

    j["humidity"] = x.getHumidity();
}
} // namespace nlohmann
