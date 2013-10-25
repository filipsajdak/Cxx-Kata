#include <gmock/gmock.h>
#include <tuple>
#include <string>

#include "Romans.h"

std::tuple<int, std::string> test_cases[] = {
    {0, ""}, {1, "I"}, {2, "II"}, {3, "III"}, {4, "IV"},
    {6, "VI"}, {7, "VII"}, {8, "VIII"}, {9, "IX"},
    {10, "X"}, {11, "XI"}, {20, "XX"}, {23, "XXIII"}, {30, "XXX"},
    {37, "XXXVII"}, {40, "XL"}, {50, "L"}, {90, "XC"},
    {100, "C"}, {400, "CD"}, {500, "D"}, {900, "CM"},
    {1000, "M"}
};

class RomansTestsParametrized : public ::testing::TestWithParam<
        std::tuple<int, std::string>
        > {
public:
    void SetUp() {
        const auto& param = GetParam();
        input = std::get<0>(param);
        expected = std::get<1>(param);
    }

    std::string expected;
    int input;
};

TEST_P(RomansTestsParametrized, generating_roman_number) {
    ASSERT_EQ(expected, toRomans(input));
}

INSTANTIATE_TEST_CASE_P(RomanTests, RomansTestsParametrized,
                        ::testing::ValuesIn(test_cases));
