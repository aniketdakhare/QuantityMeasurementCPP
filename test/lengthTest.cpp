#include "../main/model/length.h"
#include <gtest/gtest.h>

TEST(FeetTest, givenLengthsInFeet_WhenEqual_ShouldReturnTrue) 
{ 
    Length first_zero_feet(0, Unit::FEET), second_zero_feet(0, Unit::FEET);
    bool result = first_zero_feet.compare(second_zero_feet);
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
    bool result = first_feet.compare(second_feet);
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
    bool result = first_zero_inch.compare(second_zero_inch);
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
    bool result = first_inch.compare(second_inch);
    ASSERT_TRUE(result);
}

TEST(InchTest, givenDifferentLengthsInInch_WhenCheckedForValue_ShouldReturnFalse)
{
    Length first_inch(3, Unit::INCH), second_inch(5, Unit::INCH);
    bool result = (first_inch == second_inch);
    ASSERT_FALSE(result);
}

TEST(LengthTest, givenLengthsInInchAndFeet_WhenCheckedForValueAreEqual_ShouldReturnTrue)
{
    Length inch_value(12, Unit::INCH);
    Length feet_value(1, Unit::FEET);
    bool result = feet_value.compare(inch_value);
    ASSERT_TRUE(result);
}

TEST(LengthTest, givenLengthsInFeetAndYard_WhenCheckedForValueAreEqual_ShouldReturnTrue)
{
    Length yard_value(1, Unit::YARD);
    Length feet_value(3, Unit::FEET);
    bool result = feet_value.compare(yard_value);
    ASSERT_TRUE(result);
}

TEST(LengthTest, givenLengthsInFeetAndYard_WhenCheckedForValueAreNotEqual_ShouldReturnFalse)
{
    Length yard_value(3, Unit::YARD);
    Length feet_value(3, Unit::FEET);
    bool result = feet_value.compare(yard_value);
    ASSERT_FALSE(result);
}

TEST(LengthTest, givenLengthsInInchAndYard_WhenCheckedForValueAreEqual_ShouldReturnTrue)
{
    Length yard_value(1, Unit::YARD);
    Length inch_value(36, Unit::INCH);
    bool result = inch_value.compare(yard_value);
    ASSERT_TRUE(result);
}

TEST(LengthTest, givenLengthsInInchAndYard_WhenCheckedForValueAreNotEqual_ShouldReturnFalse)
{
    Length yard_value(3, Unit::YARD);
    Length inch_value(3, Unit::INCH);
    bool result = inch_value.compare(yard_value);
    ASSERT_FALSE(result);
}

TEST(LengthTest, givenLengthsInYardAndInch_WhenCheckedForValueAreEqual_ShouldReturnTrue)
{
    Length yard_value(1, Unit::YARD);
    Length inch_value(36, Unit::INCH);
    bool result = yard_value.compare(inch_value);
    ASSERT_TRUE(result);
}

TEST(LengthTest, givenLengthsInYardAndFeet_WhenCheckedForValueAreEqual_ShouldReturnTrue)
{
    Length yard_value(1, Unit::YARD);
    Length feet_value(3, Unit::FEET);
    bool result = yard_value.compare(feet_value);
    ASSERT_TRUE(result);
}

TEST(LengthTest, givenLengthsInInchAndCentimeter_WhenCheckedForValueAreEqual_ShouldReturnTrue)
{
    Length inch_value(2, Unit::INCH);
    Length centimeter_value(5, Unit::CENTIMETER);
    bool result = inch_value.compare(centimeter_value);
    ASSERT_TRUE(result);
}

TEST(LengthTest, givenLengthsInInchAndCentimeter_WhenCheckedForValueAreNotEqual_ShouldReturnFalse)
{
    Length inch_value(2, Unit::INCH);
    Length centimeter_value(2, Unit::CENTIMETER);
    bool result = inch_value.compare(centimeter_value);
    ASSERT_FALSE(result);
}

TEST(LengthTest, givenLengthsInFeetAndCentimeter_WhenCheckedForValueAreEqual_ShouldReturnTrue)
{
    Length feet_value(2, Unit::FEET);
    Length centimeter_value(60, Unit::CENTIMETER);
    bool result = feet_value.compare(centimeter_value);
    ASSERT_TRUE(result);
}

TEST(LengthTest, givenLengthsInFeetAndCentimeter_WhenCheckedForValueAreNotEqual_ShouldReturnFalse)
{
    Length feet_value(2, Unit::FEET);
    Length centimeter_value(2, Unit::CENTIMETER);
    bool result = feet_value.compare(centimeter_value);
    ASSERT_FALSE(result);
}

TEST(LengthTest, givenLengthsInYardAndCentimeter_WhenCheckedForValueAreEqual_ShouldReturnTrue)
{
    Length yard_value(1, Unit::YARD);
    Length centimeter_value(90, Unit::CENTIMETER);
    bool result = yard_value.compare(centimeter_value);
    ASSERT_TRUE(result);
}

TEST(LengthTest, givenLengthsInYardAndCentimeter_WhenCheckedForValueAreNotEqual_ShouldReturnFalse)
{
    Length yard_value(2, Unit::YARD);
    Length centimeter_value(2, Unit::CENTIMETER);
    bool result = yard_value.compare(centimeter_value);
    ASSERT_FALSE(result);
}

TEST(LengthTest, givenLengthsInInchAndInch_WhenAdded_ShouldReturnSumInInch)
{
    Length first_inch(2, Unit::INCH), second_inch(2, Unit::INCH);
    double result = first_inch.addValues(first_inch, second_inch);
    ASSERT_EQ(result, 4.0);
}

TEST(LengthTest, givenLengthsInFeetAndInch_WhenAdded_ShouldReturnSumInInch)
{
    Length feet_value(1, Unit::FEET); 
    Length inch_value(2, Unit::INCH);
    double result = feet_value.addValues(feet_value, inch_value);
    ASSERT_EQ(result, 14.0);
}

TEST(LengthTest, givenLengthsInFeetAndFeet_WhenAdded_ShouldReturnSumInInch)
{
    Length first_feet(1, Unit::FEET), second_feet(1, Unit::FEET);
    double result = first_feet.addValues(first_feet, second_feet);
    ASSERT_EQ(result, 24.0);
}

TEST(LengthTest, givenLengthsInInchAndCentimeter_WhenAdded_ShouldReturnSumInInch)
{
    Length centimeter_value(2.5, Unit::CENTIMETER); 
    Length inch_value(2, Unit::INCH);
    double result = inch_value.addValues(centimeter_value, inch_value);
    ASSERT_EQ(result, 3.0);
}

int main(int argc, char **argv) 
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}