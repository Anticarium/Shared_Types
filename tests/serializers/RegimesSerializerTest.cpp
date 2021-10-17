#include <TestDataDirectory.h>
#include <gtest/gtest.h>
#include <shared_types/RegimesSerializer.hpp>
#include <shared_types_tests/TestsUtility.h>

TEST(TestRegimesSerializer, TestDeserialization) {
    QString filePath = TEST_DATA_DIR;
    filePath.append("/json_files/Regimes.json");

    nlohmann::json jsonIn           = getJsonFromPath(filePath);
    shared_types::Regimes regimesIn = jsonIn;
    nlohmann::json json             = regimesIn;
    shared_types::Regimes regimes   = json;

    EXPECT_EQ(regimes.getRegimes()[0], "mode_1");
    EXPECT_EQ(regimes.getRegimes()[1], "mode_2");
    EXPECT_EQ(regimes.getRegimes()[2], "mode_3");
}

TEST(TestRegimesSerializer, TestSerialization) {
    QString filePath = TEST_DATA_DIR;
    filePath.append("/json_files/Regimes.json");

    nlohmann::json jsonIn         = getJsonFromPath(filePath);
    shared_types::Regimes regimes = jsonIn;

    EXPECT_EQ(regimes.getRegimes()[0], "mode_1");
    EXPECT_EQ(regimes.getRegimes()[1], "mode_2");
    EXPECT_EQ(regimes.getRegimes()[2], "mode_3");
}
