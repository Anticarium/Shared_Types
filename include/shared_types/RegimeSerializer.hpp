#pragma once
#include <nlohmann/json.hpp>
#include <shared_types/Regime.h>

namespace nlohmann {
inline void from_json(const json& j, shared_types::Regime& x) {
    x.setRegime(QString::fromStdString(j.at("regime").get<std::string>()));
}

inline void to_json(json& j, const shared_types::Regime& x) {
    j["regime"] = x.getRegime().toStdString();
}
} // namespace nlohmann
