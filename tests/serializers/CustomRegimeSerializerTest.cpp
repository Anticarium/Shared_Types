#include <TestDataDirectory.h>
#include <gtest/gtest.h>
#include <shared_types/CustomRegimeSerializer.hpp>
#include <shared_types_tests/TestsUtility.h>

TEST(TestCustomRegimeSerializer, TestDeserialization) {
    QString filePath = TEST_DATA_DIR;
    filePath.append("/json_files/CustomRegime.json");

    nlohmann::json jsonIn                     = getJsonFromPath(filePath);
    shared_types::CustomRegime customRegimeIn = jsonIn;
    nlohmann::json json                       = customRegimeIn;
    shared_types::CustomRegime customRegime   = json;

    EXPECT_EQ(customRegime.getTemperature(), 23.1f);
    EXPECT_EQ(customRegime.getName(), "custom_regime");
    EXPECT_EQ(customRegime.getRain().value(), 123);
    EXPECT_EQ(customRegime.getWind().value(), 255);
    EXPECT_EQ(customRegime.getLight().value(), 2);
}

TEST(TestCustomRegimeSerializer, TestSerialization) {
    QString filePath = TEST_DATA_DIR;
    filePath.append("/json_files/CustomRegime.json");

    nlohmann::json jsonIn                   = getJsonFromPath(filePath);
    shared_types::CustomRegime customRegime = jsonIn;

    EXPECT_EQ(customRegime.getTemperature(), 23.1f);
    EXPECT_EQ(customRegime.getName(), "custom_regime");
    EXPECT_EQ(customRegime.getRain().value(), 123);
    EXPECT_EQ(customRegime.getWind().value(), 255);
    EXPECT_EQ(customRegime.getLight().value(), 2);
}
