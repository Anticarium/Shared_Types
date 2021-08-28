#include <TestDataDirectory.h>
#include <gtest/gtest.h>
#include <shared_types/RegimeRangeSerializer.hpp>
#include <shared_types_tests/TestsUtility.h>

TEST(TestRegimeRangeSerializer, TestDeserialization) {
    QString filePath = TEST_DATA_DIR;
    filePath.append("/json_files/RegimeRange.json");

    nlohmann::json jsonIn                   = getJsonFromPath(filePath);
    shared_types::RegimeRange regimeRangeIn = jsonIn;
    nlohmann::json json                     = regimeRangeIn;
    shared_types::RegimeRange regimeRange   = json;

    EXPECT_EQ(regimeRange.from(), 1);
    EXPECT_EQ(regimeRange.to(), 73);
}

TEST(TestRegimeRangeSerializer, TestSerialization) {
    QString filePath = TEST_DATA_DIR;
    filePath.append("/json_files/RegimeRange.json");

    nlohmann::json jsonIn                 = getJsonFromPath(filePath);
    shared_types::RegimeRange regimeRange = jsonIn;

    EXPECT_EQ(regimeRange.from(), 1);
    EXPECT_EQ(regimeRange.to(), 73);
}
