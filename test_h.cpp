#include <gtest/gtest.h>
#include "h.h"

TEST(HFunctionTest, AtZeroZero)
{
    EXPECT_NEAR(h(0, 0), 0.0, 0.000001);
}

TEST(HFunctionTest, AtOneZero)
{
    EXPECT_NEAR(h(1, 0), 0.5, 0.000001);
}

TEST(HFunctionTest, AtZeroOne)
{
    EXPECT_NEAR(h(0, 1), 0.5, 0.000001);
}