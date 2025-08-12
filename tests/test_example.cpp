// #include "AllergyHeader.h"
#include <gtest/gtest.h>
#include <string>
using namespace std;

// Declaration of the function to test
string centerText(int colWidth, string text);

// Unit tests for centerText
TEST(CenterTextTest, EvenWidthEvenText)
{
    string result = centerText(10, "HiHi");
    EXPECT_EQ(result, "   HiHi   ");
}

TEST(CenterTextTest, EvenWidthOddText)
{
    string result = centerText(10, "HiH");
    EXPECT_EQ(result, "   HiH   ");
}

TEST(CenterTextTest, OddWidthEvenText)
{
    string result = centerText(11, "HiHi");
    EXPECT_EQ(result, "   HiHi   ");
}

TEST(CenterTextTest, OddWidthOddText)
{
    string result = centerText(11, "HiH");
    EXPECT_EQ(result, "    HiH    ");
}

TEST(CenterTextTest, TextLongerThanWidth)
{
    string result = centerText(5, "TooLongText");
    EXPECT_EQ(result, "TooLongText");
}

TEST(CenterTextTest, EmptyText)
{
    string result = centerText(8, "");
    EXPECT_EQ(result, "        ");
}