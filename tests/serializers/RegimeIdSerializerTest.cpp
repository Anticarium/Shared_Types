#include <TestDataDirectory.h>
#include <gtest/gtest.h>
#include <shared_types/RegimeIdSerializer.hpp>
#include <shared_types_tests/TestsUtility.h>

TEST(TestRegimeIdSerializer, TestDeserialization) {
    QString filePath = TEST_DATA_DIR;
    filePath.append("/json_files/RegimeId.json");

    nlohmann::json jsonIn             = getJsonFromPath(filePath);
    shared_types::RegimeId regimeIdIn = jsonIn;
    nlohmann::json json               = regimeIdIn;
    shared_types::RegimeId regimeId   = json;

    EXPECT_EQ(regimeId.getId(), 3);
}

TEST(TestRegimeIdSerializer, TestSerialization) {
    QString filePath = TEST_DATA_DIR;
    filePath.append("/json_files/RegimeId.json");

    nlohmann::json jsonIn           = getJsonFromPath(filePath);
    shared_types::RegimeId regimeId = jsonIn;

    EXPECT_EQ(regimeId.getId(), 3);
}
