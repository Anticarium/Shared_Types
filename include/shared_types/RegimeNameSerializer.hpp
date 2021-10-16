#pragma once
#include <nlohmann/json.hpp>
#include <shared_types/RegimeName.h>

namespace nlohmann {
inline void from_json(const json& j, shared_types::RegimeName& x) {
    x.setName(QString::fromStdString(j.at("regime_name").get<std::string>()));
}

inline void to_json(json& j, const shared_types::RegimeName& x) {
    j["regime_name"] = x.getName().toStdString();
}
} // namespace nlohmann
