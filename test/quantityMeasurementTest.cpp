#include "../main/model/quantityMeasurement.h"
#include <gtest/gtest.h>

TEST(FeetTest, givenLengthsInFeet_WhenEqual_ShouldReturnTrue) 
{ 
    QuantityMeasurement first_zero_feet(0, Unit::FEET), second_zero_feet(0, Unit::FEET);
    bool result = first_zero_feet.compare(second_zero_feet);
    ASSERT_TRUE(result);
}

TEST(FeetTest, givenLengthsInFeet_WhenOneOfTheLengthIsNull_ShouldReturnFalse) 
{
    QuantityMeasurement feet(1, Unit::FEET);
    bool result = (&feet == nullptr);
    ASSERT_FALSE(result);
}

TEST(FeetTest, givenLengthsInFeetAsSameObject_WhenCheckedForTheReference_ShouldReturnTrue) 
{
    QuantityMeasurement *first_ref = new QuantityMeasurement(1, Unit::FEET);
    QuantityMeasurement *second_ref = first_ref;
    bool result = (first_ref == second_ref);
    ASSERT_TRUE(result);
}

TEST(FeetTest, givenLengthsInFeet_WhenCheckedForTheType_ShouldReturnTrue)
{
    QuantityMeasurement first_feet(0, Unit::FEET), second_feet(0, Unit::FEET);
    bool result = first_feet.compare(second_feet);
    ASSERT_TRUE(result);
}

TEST(FeetTest, givenDifferentLengthsInFeet_WhenCheckedForValue_ShouldReturnFalse)
{
    QuantityMeasurement first_feet(3, Unit::FEET), second_feet(5, Unit::FEET);
    bool result = (first_feet == second_feet);
    ASSERT_FALSE(result);
}

TEST(InchTest, givenLengthsInInch_WhenEqual_ShouldReturnTrue) 
{ 
    QuantityMeasurement first_zero_inch(0, Unit::INCH), second_zero_inch(0, Unit::INCH);
    bool result = first_zero_inch.compare(second_zero_inch);
    ASSERT_TRUE(result);
}

TEST(InchTest, givenLengthsInInch_WhenOneOfTheLengthIsNull_ShouldReturnFalse) 
{
    QuantityMeasurement feet(1, Unit::INCH);
    bool result = (&feet == nullptr);
    ASSERT_FALSE(result);
}

TEST(InchTest, givenLengthsInInchAsSameObject_WhenCheckedForTheReference_ShouldReturnTrue) 
{
    QuantityMeasurement *first_ref = new QuantityMeasurement(1, Unit::INCH);
    QuantityMeasurement *second_ref = first_ref;
    bool result = (first_ref == second_ref);
    ASSERT_TRUE(result);
}

TEST(InchTest, givenLengthsInInch_WhenCheckedForTheType_ShouldReturnTrue)
{
    QuantityMeasurement first_inch(0, Unit::INCH), second_inch(0, Unit::INCH);
    bool result = first_inch.compare(second_inch);
    ASSERT_TRUE(result);
}

TEST(InchTest, givenDifferentLengthsInInch_WhenCheckedForValue_ShouldReturnFalse)
{
    QuantityMeasurement first_inch(3, Unit::INCH), second_inch(5, Unit::INCH);
    bool result = (first_inch == second_inch);
    ASSERT_FALSE(result);
}

TEST(LengthTest, givenLengthsInInchAndFeet_WhenCheckedForValueAreEqual_ShouldReturnTrue)
{
    QuantityMeasurement inch_value(12, Unit::INCH);
    QuantityMeasurement feet_value(1, Unit::FEET);
    bool result = feet_value.compare(inch_value);
    ASSERT_TRUE(result);
}

TEST(LengthTest, givenLengthsInFeetAndYard_WhenCheckedForValueAreEqual_ShouldReturnTrue)
{
    QuantityMeasurement yard_value(1, Unit::YARD);
    QuantityMeasurement feet_value(3, Unit::FEET);
    bool result = feet_value.compare(yard_value);
    ASSERT_TRUE(result);
}

TEST(LengthTest, givenLengthsInFeetAndYard_WhenCheckedForValueAreNotEqual_ShouldReturnFalse)
{
    QuantityMeasurement yard_value(3, Unit::YARD);
    QuantityMeasurement feet_value(3, Unit::FEET);
    bool result = feet_value.compare(yard_value);
    ASSERT_FALSE(result);
}

TEST(LengthTest, givenLengthsInInchAndYard_WhenCheckedForValueAreEqual_ShouldReturnTrue)
{
    QuantityMeasurement yard_value(1, Unit::YARD);
    QuantityMeasurement inch_value(36, Unit::INCH);
    bool result = inch_value.compare(yard_value);
    ASSERT_TRUE(result);
}

TEST(LengthTest, givenLengthsInInchAndYard_WhenCheckedForValueAreNotEqual_ShouldReturnFalse)
{
    QuantityMeasurement yard_value(3, Unit::YARD);
    QuantityMeasurement inch_value(3, Unit::INCH);
    bool result = inch_value.compare(yard_value);
    ASSERT_FALSE(result);
}

TEST(LengthTest, givenLengthsInYardAndInch_WhenCheckedForValueAreEqual_ShouldReturnTrue)
{
    QuantityMeasurement yard_value(1, Unit::YARD);
    QuantityMeasurement inch_value(36, Unit::INCH);
    bool result = yard_value.compare(inch_value);
    ASSERT_TRUE(result);
}

TEST(LengthTest, givenLengthsInYardAndFeet_WhenCheckedForValueAreEqual_ShouldReturnTrue)
{
    QuantityMeasurement yard_value(1, Unit::YARD);
    QuantityMeasurement feet_value(3, Unit::FEET);
    bool result = yard_value.compare(feet_value);
    ASSERT_TRUE(result);
}

TEST(LengthTest, givenLengthsInInchAndCentimeter_WhenCheckedForValueAreEqual_ShouldReturnTrue)
{
    QuantityMeasurement inch_value(2, Unit::INCH);
    QuantityMeasurement centimeter_value(5, Unit::CENTIMETER);
    bool result = inch_value.compare(centimeter_value);
    ASSERT_TRUE(result);
}

TEST(LengthTest, givenLengthsInInchAndCentimeter_WhenCheckedForValueAreNotEqual_ShouldReturnFalse)
{
    QuantityMeasurement inch_value(2, Unit::INCH);
    QuantityMeasurement centimeter_value(2, Unit::CENTIMETER);
    bool result = inch_value.compare(centimeter_value);
    ASSERT_FALSE(result);
}

TEST(LengthTest, givenLengthsInFeetAndCentimeter_WhenCheckedForValueAreEqual_ShouldReturnTrue)
{
    QuantityMeasurement feet_value(2, Unit::FEET);
    QuantityMeasurement centimeter_value(60, Unit::CENTIMETER);
    bool result = feet_value.compare(centimeter_value);
    ASSERT_TRUE(result);
}

TEST(LengthTest, givenLengthsInFeetAndCentimeter_WhenCheckedForValueAreNotEqual_ShouldReturnFalse)
{
    QuantityMeasurement feet_value(2, Unit::FEET);
    QuantityMeasurement centimeter_value(2, Unit::CENTIMETER);
    bool result = feet_value.compare(centimeter_value);
    ASSERT_FALSE(result);
}

TEST(LengthTest, givenLengthsInYardAndCentimeter_WhenCheckedForValueAreEqual_ShouldReturnTrue)
{
    QuantityMeasurement yard_value(1, Unit::YARD);
    QuantityMeasurement centimeter_value(90, Unit::CENTIMETER);
    bool result = yard_value.compare(centimeter_value);
    ASSERT_TRUE(result);
}

TEST(LengthTest, givenLengthsInYardAndCentimeter_WhenCheckedForValueAreNotEqual_ShouldReturnFalse)
{
    QuantityMeasurement yard_value(2, Unit::YARD);
    QuantityMeasurement centimeter_value(2, Unit::CENTIMETER);
    bool result = yard_value.compare(centimeter_value);
    ASSERT_FALSE(result);
}

TEST(LengthTest, givenLengthsInInchAndInch_WhenAdded_ShouldReturnSumInInch)
{
    QuantityMeasurement first_inch(2, Unit::INCH), second_inch(2, Unit::INCH);
    double result = first_inch.addValues(first_inch, second_inch);
    ASSERT_EQ(result, 4.0);
}

TEST(LengthTest, givenLengthsInFeetAndInch_WhenAdded_ShouldReturnSumInInch)
{
    QuantityMeasurement feet_value(1, Unit::FEET); 
    QuantityMeasurement inch_value(2, Unit::INCH);
    double result = feet_value.addValues(feet_value, inch_value);
    ASSERT_EQ(result, 14.0);
}

TEST(LengthTest, givenLengthsInFeetAndFeet_WhenAdded_ShouldReturnSumInInch)
{
    QuantityMeasurement first_feet(1, Unit::FEET), second_feet(1, Unit::FEET);
    double result = first_feet.addValues(first_feet, second_feet);
    ASSERT_EQ(result, 24.0);
}

TEST(LengthTest, givenLengthsInInchAndCentimeter_WhenAdded_ShouldReturnSumInInch)
{
    QuantityMeasurement centimeter_value(2.5, Unit::CENTIMETER); 
    QuantityMeasurement inch_value(2, Unit::INCH);
    double result = inch_value.addValues(centimeter_value, inch_value);
    ASSERT_EQ(result, 3.0);
}

TEST(VolumeTest, givenVolumeInLitreAndLitre_WhenCheckedForValueAreEqual_ShouldReturnTrue)
{
    QuantityMeasurement first_litre_value(2, Unit::LITRE), second_litre_value(2, Unit::LITRE);
    bool result = first_litre_value.compare(second_litre_value);
    ASSERT_TRUE(result);
}

TEST(VolumeTest, givenVolumeInGallonAndGallon_WhenCheckedForValueAreEqual_ShouldReturnTrue)
{
    QuantityMeasurement first_gallon_value(2, Unit::GALLON), second_gallon_value(2, Unit::GALLON);
    bool result = first_gallon_value.compare(second_gallon_value);
    ASSERT_TRUE(result);
}

TEST(VolumeTest, givenVolumeInGallonAndLitre_WhenCheckedForValueAreEqual_ShouldReturnTrue)
{
    QuantityMeasurement gallon_value(2, Unit::GALLON);
    QuantityMeasurement litre_value(7.56, Unit::LITRE);
    bool result = gallon_value.compare(litre_value);
    ASSERT_TRUE(result);
}

TEST(VolumeTest, givenVolumeInGallonAndLitre_WhenCheckedForValueAreNotEqual_ShouldReturnFalse)
{
    QuantityMeasurement gallon_value(2, Unit::GALLON);
    QuantityMeasurement litre_value(2, Unit::LITRE);
    bool result = gallon_value.compare(litre_value);
    ASSERT_FALSE(result);
}

TEST(VolumeTest, givenVolumeInMillilitreAndMillilitre_WhenCheckedForValueAreEqual_ShouldReturnTrue)
{
    QuantityMeasurement first_ml_value(2, Unit::MILLILITRE);
    QuantityMeasurement second_ml_value(2, Unit::MILLILITRE);
    bool result = first_ml_value.compare(second_ml_value);
    ASSERT_TRUE(result);
}

TEST(VolumeTest, givenVolumeInLitreAndMillilitre_WhenCheckedForValueAreEqual_ShouldReturnTrue)
{
    QuantityMeasurement ml_value(2000, Unit::MILLILITRE);
    QuantityMeasurement litre_value(2, Unit::LITRE);
    bool result = ml_value.compare(litre_value);
    ASSERT_TRUE(result);
}

TEST(VolumeTest, givenVolumeInLitreAndMillilitre_WhenCheckedForValueAreNotEqual_ShouldReturnFalse)
{
    QuantityMeasurement ml_value(2, Unit::MILLILITRE);
    QuantityMeasurement litre_value(2, Unit::LITRE);
    bool result = ml_value.compare(litre_value);
    ASSERT_FALSE(result);
}

TEST(QuantityTypeTest, givenValuesInFeetAndLitre_WhenCompared_ShouldThrowException)
{
    QuantityMeasurement feet_value(2, Unit::FEET);
    QuantityMeasurement litre_value(2, Unit::LITRE);
    try
    {
        bool result = feet_value.compare(litre_value);
    }
    catch(DifferentQuantityTypeException& e)
    {
        ASSERT_EQ(std::string("Operations with different unit types."), e.what());
    }
}

TEST(QuantityTypeTest, givenValuesInInchAndLitre_WhenAdded_ShouldThrowException)
{
    QuantityMeasurement inch_value(2, Unit::INCH);
    QuantityMeasurement litre_value(2, Unit::LITRE);
    try
    {
        double result = inch_value.addValues(litre_value, inch_value);
    }
    catch(DifferentQuantityTypeException& e)
    {
        ASSERT_EQ(std::string("Operations with different unit types."), e.what());
    }
}

TEST(VolumeTest, givenVolumeInGallonAndLitre_WhenAdded_ShouldReturnSumInLitres)
{
    QuantityMeasurement gallon_value(1, Unit::GALLON);
    QuantityMeasurement litre_value(3.78, Unit::LITRE);
    double result = gallon_value.addValues(litre_value, gallon_value);
    ASSERT_EQ(result, 7.56);
}

TEST(VolumeTest, givenVolumeInLitreAndMillilitre_WhenAdded_ShouldReturnSumInLitres)
{
    QuantityMeasurement ml_value(2000, Unit::MILLILITRE);
    QuantityMeasurement litre_value(2, Unit::LITRE);
    double result = ml_value.addValues(litre_value, ml_value);
    ASSERT_EQ(result, 4);
}

TEST(WeightTest, givenWeightInKilogramAndKilogram_WhenCheckedForValueAreEqual_ShouldReturnTrue)
{
    QuantityMeasurement first_kg_value(2, Unit::KILOGRAM);
    QuantityMeasurement second_kg_value(2, Unit::KILOGRAM);
    bool result = first_kg_value.compare(second_kg_value);
    ASSERT_TRUE(result);
}

TEST(WeightTest, givenWeightInGramAndGram_WhenCheckedForValueAreEqual_ShouldReturnTrue)
{
    QuantityMeasurement first_gram_value(2, Unit::GRAM);
    QuantityMeasurement second_gram_value(2, Unit::GRAM);
    bool result = first_gram_value.compare(second_gram_value);
    ASSERT_TRUE(result);
}

TEST(WeightTest, givenWeightInTonneAndTonne_WhenCheckedForValueAreEqual_ShouldReturnTrue)
{
    QuantityMeasurement first_tonne_value(2, Unit::TONNE);
    QuantityMeasurement second_tonne_value(2, Unit::TONNE);
    bool result = first_tonne_value.compare(second_tonne_value);
    ASSERT_TRUE(result);
}

TEST(WeightTest, givenWeightInKilogramAndGram_WhenCheckedForValueAreEqual_ShouldReturnTrue)
{
    QuantityMeasurement kg_value(2, Unit::KILOGRAM);
    QuantityMeasurement gram_value(2000, Unit::GRAM);
    bool result = kg_value.compare(gram_value);
    ASSERT_TRUE(result);
}

TEST(WeightTest, givenWeightInKilogramAndGram_WhenCheckedForValueAreNotEqual_ShouldReturnFalse)
{
    QuantityMeasurement kg_value(2, Unit::KILOGRAM);
    QuantityMeasurement gram_value(2, Unit::GRAM);
    bool result = kg_value.compare(gram_value);
    ASSERT_FALSE(result);
}

TEST(WeightTest, givenWeightInTonneAndKilogram_WhenCheckedForValueAreEqual_ShouldReturnTrue)
{
    QuantityMeasurement kg_value(2000, Unit::KILOGRAM);
    QuantityMeasurement tonne_value(2, Unit::TONNE);
    bool result = kg_value.compare(tonne_value);
    ASSERT_TRUE(result);
}

int main(int argc, char **argv) 
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}