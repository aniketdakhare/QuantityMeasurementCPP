#include "../main/feet.h"
#include <gtest/gtest.h>

TEST(FeetTest, _0feet_and_0feet__should_be_equal) 
{ 
    Feet first_zero_feet(0), second_zero_feet(0); 
    ASSERT_EQ(first_zero_feet, second_zero_feet);
}

TEST(FeetTest, _null_feet_and_1feet__should_not_be_equal) 
{
    Feet feet(1);
    ASSERT_NE(&feet, nullptr);
}

TEST(FeetTest, _one_object_and_2ref__should_be_equal) 
{
    Feet *first_ref = new Feet(1);
    Feet *second_ref = first_ref;
    ASSERT_EQ(first_ref, second_ref);
}

int main(int argc, char **argv) 
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}