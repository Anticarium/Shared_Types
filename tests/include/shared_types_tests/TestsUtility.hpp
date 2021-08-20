#pragma once
#include <QFile>
#include <QString>
#include <nlohmann/json.hpp>

/*
 * Returns json from passed path
 */
nlohmann::json getJsonFromFile(const QString& path) {
    QFile jsonFile(path);
    if (!jsonFile.open(QIODevice::ReadOnly)) {
        return nlohmann::json();
    }

    std::string jsonString = jsonFile.readAll().toStdString();
    return nlohmann::json(jsonString);
}
