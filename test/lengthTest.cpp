#include "../main/model/length.h"
#include <gtest/gtest.h>

TEST(FeetTest, givenLengthsInFeet_WhenEqual_ShouldReturnTrue) 
{ 
    Length first_zero_feet(0, Unit::FEET), second_zero_feet(0, Unit::FEET);
    bool result = (first_zero_feet == second_zero_feet);
    ASSERT_TRUE(result);
}

TEST(FeetTest, givenLengthsInFeet_WhenOneOfTheLengthIsNull_ShouldReturnFalse) 
{
    Length feet(1, Unit::FEET);
    bool result = (&feet == nullptr);
    ASSERT_FALSE(result);
}

TEST(FeetTest, givenLengthsInFeetAsSameObject_WhenCheckedForTheReference_ShouldReturnTrue) 
{
    Length *first_ref = new Length(1, Unit::FEET);
    Length *second_ref = first_ref;
    bool result = (first_ref == second_ref);
    ASSERT_TRUE(result);
}

TEST(FeetTest, givenLengthsInFeet_WhenCheckedForTheType_ShouldReturnTrue)
{
    Length first_feet(0, Unit::FEET), second_feet(0, Unit::FEET);
    bool result = (first_feet == second_feet);
    ASSERT_TRUE(result);
}

TEST(FeetTest, givenDifferentLengthsInFeet_WhenCheckedForValue_ShouldReturnFalse)
{
    Length first_feet(3, Unit::FEET), second_feet(5, Unit::FEET);
    bool result = (first_feet == second_feet);
    ASSERT_FALSE(result);
}

TEST(InchTest, givenLengthsInInch_WhenEqual_ShouldReturnTrue) 
{ 
    Length first_zero_inch(0, Unit::INCH), second_zero_inch(0, Unit::INCH);
    bool result = (first_zero_inch == second_zero_inch);
    ASSERT_TRUE(result);
}

TEST(InchTest, givenLengthsInInch_WhenOneOfTheLengthIsNull_ShouldReturnFalse) 
{
    Length feet(1, Unit::INCH);
    bool result = (&feet == nullptr);
    ASSERT_FALSE(result);
}

TEST(InchTest, givenLengthsInInchAsSameObject_WhenCheckedForTheReference_ShouldReturnTrue) 
{
    Length *first_ref = new Length(1, Unit::INCH);
    Length *second_ref = first_ref;
    bool result = (first_ref == second_ref);
    ASSERT_TRUE(result);
}

TEST(InchTest, givenLengthsInInch_WhenCheckedForTheType_ShouldReturnTrue)
{
    Length first_inch(0, Unit::INCH), second_inch(0, Unit::INCH);
    bool result = (first_inch == second_inch);
    ASSERT_TRUE(result);
}

TEST(InchTest, givenDifferentLengthsInInch_WhenCheckedForValue_ShouldReturnFalse)
{
    Length first_inch(3, Unit::INCH), second_inch(5, Unit::INCH);
    bool result = (first_inch == second_inch);
    ASSERT_FALSE(result);
}

int main(int argc, char **argv) 
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}