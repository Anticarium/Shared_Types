#include <TestDataDirectory.h>
#include <gtest/gtest.h>
#include <shared_types/RegimePropertySerializer.hpp>
#include <shared_types_tests/TestsUtility.h>

TEST(TestRegimePropertySerializer, TestDeserialization) {
    QString filePath = TEST_DATA_DIR;
    filePath.append("/json_files/RegimeProperty.json");

    nlohmann::json jsonIn                         = getJsonFromPath(filePath);
    shared_types::RegimeProperty regimePropertyIn = jsonIn;
    nlohmann::json json                           = regimePropertyIn;
    shared_types::RegimeProperty regimeProperty   = json;

    EXPECT_EQ(regimeProperty.value(), 255);
    EXPECT_EQ(regimeProperty.isRandom(), true);
    EXPECT_EQ(regimeProperty.getRange().from(), 6);
    EXPECT_EQ(regimeProperty.getRange().to(), 100);
}

TEST(TestRegimePropertySerializer, TestSerialization) {
    QString filePath = TEST_DATA_DIR;
    filePath.append("/json_files/RegimeProperty.json");

    nlohmann::json jsonIn                       = getJsonFromPath(filePath);
    shared_types::RegimeProperty regimeProperty = jsonIn;

    EXPECT_EQ(regimeProperty.value(), 255);
    EXPECT_EQ(regimeProperty.isRandom(), true);
    EXPECT_EQ(regimeProperty.getRange().from(), 6);
    EXPECT_EQ(regimeProperty.getRange().to(), 100);
}
