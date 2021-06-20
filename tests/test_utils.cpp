/**
 * @file test_utils.cpp
 * @author xmdf
 * @date 9 June 2021
 * @brief Test liars utils
 */

#include "utils.hpp"
#include <gtest/gtest.h>


TEST(TestUtils, TestURandi)
{
    for (int32_t i = 1; i < UINT16_MAX; ++i) {
        int32_t x = lrs::utils::u_randi(-i, i);
        EXPECT_GE(x, -i);
        EXPECT_LE(x, i);
    }
}