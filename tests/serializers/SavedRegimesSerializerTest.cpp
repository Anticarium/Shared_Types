#include <TestDataDirectory.h>
#include <gtest/gtest.h>
#include <shared_types/SavedRegimesSerializer.hpp>
#include <shared_types_tests/TestsUtility.h>

TEST(TestSavedRegimesSerializer, TestDeserialization) {
    QString filePath = TEST_DATA_DIR;
    filePath.append("/json_files/SavedRegimes.json");

    nlohmann::json jsonIn                     = getJsonFromPath(filePath);
    shared_types::SavedRegimes savedRegimesIn = jsonIn;
    nlohmann::json json                       = savedRegimesIn;
    shared_types::SavedRegimes savedRegimes   = json;

    EXPECT_EQ(savedRegimes.getSavedRegimes()[0].getName(), "mode_1");
    EXPECT_EQ(savedRegimes.getSavedRegimes()[2].getRegimeValue().getTemperature(), 35.8f);
}

TEST(TestSavedRegimesSerializer, TestSerialization) {
    QString filePath = TEST_DATA_DIR;
    filePath.append("/json_files/SavedRegimes.json");

    nlohmann::json jsonIn                   = getJsonFromPath(filePath);
    shared_types::SavedRegimes savedRegimes = jsonIn;

    EXPECT_EQ(savedRegimes.getSavedRegimes()[0].getName(), "mode_1");
    EXPECT_EQ(savedRegimes.getSavedRegimes()[2].getRegimeValue().getTemperature(), 35.8f);
}
