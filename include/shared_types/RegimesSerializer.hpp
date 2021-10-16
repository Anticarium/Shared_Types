#pragma once
#include <nlohmann/json.hpp>
#include <shared_types/Regimes.h>

namespace nlohmann {
inline void from_json(const json& j, shared_types::Regimes& x) {
    std::vector<std::string> stdStrings = j.at("regimes").get<std::vector<std::string>>();
    std::vector<QString> qStrings;

    for (const std::string& i : stdStrings) {
        qStrings.push_back(QString::fromStdString(i));
    }

    x.setRegimes(qStrings);
}

inline void to_json(json& j, const shared_types::Regimes& x) {
    std::vector<std::string> stdStrings;
    std::vector<QString> qStrings = x.getRegimes();

    for (const QString& i : qStrings) {
        stdStrings.push_back(i.toStdString());
    }

    j["regimes"] = stdStrings;
}
} // namespace nlohmann
