#include <TestDataDirectory.h>
#include <gtest/gtest.h>
#include <shared_types/CurrentRegimeSerializer.hpp>
#include <shared_types_tests/TestsUtility.h>

TEST(TestCurrentRegimeSerializer, TestDeserialization) {
    QString filePath = TEST_DATA_DIR;
    filePath.append("/json_files/CurrentRegime.json");

    nlohmann::json jsonIn                       = getJsonFromPath(filePath);
    shared_types::CurrentRegime currentRegimeIn = jsonIn;
    nlohmann::json json                         = currentRegimeIn;
    shared_types::CurrentRegime currentRegime   = json;

    EXPECT_EQ(currentRegime.getCurrentRegime(), "mode_1");
}

TEST(TestCurrentRegimeSerializer, TestSerialization) {
    QString filePath = TEST_DATA_DIR;
    filePath.append("/json_files/CurrentRegime.json");

    nlohmann::json jsonIn                     = getJsonFromPath(filePath);
    shared_types::CurrentRegime currentRegime = jsonIn;

    EXPECT_EQ(currentRegime.getCurrentRegime(), "mode_1");
}
