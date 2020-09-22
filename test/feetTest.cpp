#include "../main/feet.h"
#include <gtest/gtest.h>

TEST(FeetTest, _0feet_and_0feet__should_be_equal) 
{ 
    Feet first_zero_feet(0), second_zero_feet(0); 
    ASSERT_EQ(first_zero_feet, second_zero_feet);
}

TEST(FeetTest, _null_feet_and_1feet__should_not_be_equal) 
{
    Feet first_zero_feet(1);
    ASSERT_NE(first_zero_feet, nullptr);
}

int main(int argc, char **argv) 
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}