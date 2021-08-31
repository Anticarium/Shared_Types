#include <TestDataDirectory.h>
#include <gtest/gtest.h>
#include <shared_types/ControlSerializer.hpp>
#include <shared_types_tests/TestsUtility.h>

TEST(TestControlSerializer, TestDeserialization) {
    QString filePath = TEST_DATA_DIR;
    filePath.append("/json_files/Control.json");

    nlohmann::json jsonIn           = getJsonFromPath(filePath);
    shared_types::Control controlIn = jsonIn;
    nlohmann::json json             = controlIn;
    shared_types::Control control   = json;

    EXPECT_EQ(control.isRaining(), true);
    EXPECT_EQ(control.isHeating(), true);
    EXPECT_EQ(control.isAuto(), true);
    EXPECT_EQ(control.getLightPercentage(), 23);
    EXPECT_EQ(control.getWindPercentage(), 12);
}

TEST(TestControlSerializer, TestSerialization) {
    QString filePath = TEST_DATA_DIR;
    filePath.append("/json_files/Control.json");

    nlohmann::json jsonIn         = getJsonFromPath(filePath);
    shared_types::Control control = jsonIn;

    EXPECT_EQ(control.isRaining(), true);
    EXPECT_EQ(control.isHeating(), true);
    EXPECT_EQ(control.isAuto(), true);
    EXPECT_EQ(control.getLightPercentage(), 23);
    EXPECT_EQ(control.getWindPercentage(), 12);
}
