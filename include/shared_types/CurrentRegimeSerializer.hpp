#pragma once
#include <nlohmann/json.hpp>
#include <shared_types/CurrentRegime.h>

namespace nlohmann {
inline void from_json(const json& j, shared_types::CurrentRegime& x) {
    x.setCurrentRegime(QString::fromStdString(j.at("current_regime").get<std::string>()));
}

inline void to_json(json& j, const shared_types::CurrentRegime& x) {
    j["current_regime"] = x.getCurrentRegime().toStdString();
}
} // namespace nlohmann
