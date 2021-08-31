#include <TestDataDirectory.h>
#include <gtest/gtest.h>
#include <shared_types/TerrariumDataSerializer.hpp>
#include <shared_types_tests/TestsUtility.h>

TEST(TestTerrariumDataSerializer, TestDeserialization) {
    QString filePath = TEST_DATA_DIR;
    filePath.append("/json_files/TerrariumData.json");

    nlohmann::json jsonIn                       = getJsonFromPath(filePath);
    shared_types::TerrariumData terrariumDataIn = jsonIn;
    nlohmann::json json                         = terrariumDataIn;
    shared_types::TerrariumData terrariumData   = json;

    EXPECT_EQ(terrariumData.getControl().getLightPercentage(), 23);
    EXPECT_EQ(terrariumData.getCustomRegimes()[0].getName(), "regime_1");
    EXPECT_EQ(terrariumData.getCustomRegimes()[1].getName(), "regime_2");
}

TEST(TestTerrariumDataSerializer, TestSerialization) {
    QString filePath = TEST_DATA_DIR;
    filePath.append("/json_files/TerrariumData.json");

    nlohmann::json jsonIn                     = getJsonFromPath(filePath);
    shared_types::TerrariumData terrariumData = jsonIn;

    EXPECT_EQ(terrariumData.getControl().getLightPercentage(), 23);
    EXPECT_EQ(terrariumData.getCustomRegimes()[0].getName(), "regime_1");
    EXPECT_EQ(terrariumData.getCustomRegimes()[1].getName(), "regime_2");
}
