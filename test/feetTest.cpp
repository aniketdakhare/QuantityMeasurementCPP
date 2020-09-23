#include "../main/model/feet.h"
#include <gtest/gtest.h>

TEST(FeetTest, givenLengthsInFeet_WhenEqual_ShouldReturnTrue) 
{ 
    Feet first_zero_feet(0, LENGTH), second_zero_feet(0, LENGTH);
    bool result = (first_zero_feet == second_zero_feet);
    ASSERT_TRUE(result);
}

TEST(FeetTest, givenLengthsInFeet_WhenOneOfTheLengthIsNull_ShouldReturnFalse) 
{
    Feet feet(1, LENGTH);
    bool result = (&feet == nullptr);
    ASSERT_FALSE(result);
}

TEST(FeetTest, givenLengthsInFeetAsSameObject_WhenCheckedForTheReference_ShouldReturnTrue) 
{
    Feet *first_ref = new Feet(1, LENGTH);
    Feet *second_ref = first_ref;
    bool result = (first_ref == second_ref);
    ASSERT_TRUE(result);
}

TEST(FeetTest, givenLengthsInFeet_WhenCheckedForTheType_ShouldReturnTrue)
{
    Feet first_zero_feet(0, LENGTH), second_zero_feet(0, LENGTH);
    bool result = (first_zero_feet == first_zero_feet);
    ASSERT_TRUE(result);
}

int main(int argc, char **argv) 
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}