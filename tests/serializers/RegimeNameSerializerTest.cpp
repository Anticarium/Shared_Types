#include <TestDataDirectory.h>
#include <gtest/gtest.h>
#include <shared_types/RegimeNameSerializer.hpp>
#include <shared_types_tests/TestsUtility.h>

TEST(TestRegimeNameSerializer, TestDeserialization) {
    QString filePath = TEST_DATA_DIR;
    filePath.append("/json_files/RegimeName.json");

    nlohmann::json jsonIn                 = getJsonFromPath(filePath);
    shared_types::RegimeName regimeNameIn = jsonIn;
    nlohmann::json json                   = regimeNameIn;
    shared_types::RegimeName regimeName   = json;

    EXPECT_EQ(regimeName.getName(), "mode_1");
}

TEST(TestRegimeNameSerializer, TestSerialization) {
    QString filePath = TEST_DATA_DIR;
    filePath.append("/json_files/RegimeName.json");

    nlohmann::json jsonIn               = getJsonFromPath(filePath);
    shared_types::RegimeName regimeName = jsonIn;

    EXPECT_EQ(regimeName.getName(), "mode_1");
}
