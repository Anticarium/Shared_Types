#include <TestDataDirectory.h>
#include <gtest/gtest.h>
#include <shared_types/SensorDataSerializer.hpp>
#include <shared_types_tests/TestsUtility.h>

TEST(TestSensorDataSerializer, TestDeserialization) {
    QString filePath = TEST_DATA_DIR;
    filePath.append("/json_files/SensorData.json");

    nlohmann::json jsonIn                 = getJsonFromPath(filePath);
    shared_types::SensorData sensorDataIn = jsonIn;
    nlohmann::json json                   = sensorDataIn;
    shared_types::SensorData sensorData   = json;

    EXPECT_EQ(sensorData.getHumidity(), 23);
    EXPECT_EQ(sensorData.getMoisture(), 87);
    EXPECT_EQ(sensorData.getTemperature(), 23.1f);
}

TEST(TestSensorDataSerializer, TestSerialization) {
    QString filePath = TEST_DATA_DIR;
    filePath.append("/json_files/SensorData.json");

    nlohmann::json jsonIn               = getJsonFromPath(filePath);
    shared_types::SensorData sensorData = jsonIn;

    EXPECT_EQ(sensorData.getHumidity(), 23);
    EXPECT_EQ(sensorData.getMoisture(), 87);
    EXPECT_EQ(sensorData.getTemperature(), 23.1f);
}
