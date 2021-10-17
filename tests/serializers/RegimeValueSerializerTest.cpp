#include <TestDataDirectory.h>
#include <gtest/gtest.h>
#include <shared_types/RegimeValueSerializer.hpp>
#include <shared_types_tests/TestsUtility.h>

TEST(TestRegimeValueSerializer, TestDeserialization) {
    QString filePath = TEST_DATA_DIR;
    filePath.append("/json_files/RegimeValue.json");

    nlohmann::json jsonIn                   = getJsonFromPath(filePath);
    shared_types::RegimeValue regimeValueIn = jsonIn;
    nlohmann::json json                     = regimeValueIn;
    shared_types::RegimeValue regimeValue   = json;

    EXPECT_EQ(regimeValue.getMoisture(), 87);
    EXPECT_EQ(regimeValue.getTemperature(), 23.1f);
}

TEST(TestRegimeValueSerializer, TestSerialization) {
    QString filePath = TEST_DATA_DIR;
    filePath.append("/json_files/RegimeValue.json");

    nlohmann::json jsonIn                 = getJsonFromPath(filePath);
    shared_types::RegimeValue regimeValue = jsonIn;

    EXPECT_EQ(regimeValue.getMoisture(), 87);
    EXPECT_EQ(regimeValue.getTemperature(), 23.1f);
}
