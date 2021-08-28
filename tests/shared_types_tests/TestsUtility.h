#pragma once
#include <QFile>
#include <QString>
#include <nlohmann/json.hpp>

/*
 * Returns json from passed path
 */
nlohmann::json getJsonFromPath(const QString& path);
