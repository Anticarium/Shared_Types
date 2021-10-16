#include <TestDataDirectory.h>
#include <gtest/gtest.h>
#include <shared_types/RegimeSerializer.hpp>
#include <shared_types_tests/TestsUtility.h>

TEST(TestRegimeSerializer, TestDeserialization) {
    QString filePath = TEST_DATA_DIR;
    filePath.append("/json_files/Regime.json");

    nlohmann::json jsonIn         = getJsonFromPath(filePath);
    shared_types::Regime regimeIn = jsonIn;
    nlohmann::json json           = regimeIn;
    shared_types::Regime regime   = json;

    EXPECT_EQ(regime.getRegime(), "mode_1");
}

TEST(TestRegimeSerializer, TestSerialization) {
    QString filePath = TEST_DATA_DIR;
    filePath.append("/json_files/Regime.json");

    nlohmann::json jsonIn       = getJsonFromPath(filePath);
    shared_types::Regime regime = jsonIn;

    EXPECT_EQ(regime.getRegime(), "mode_1");
}
