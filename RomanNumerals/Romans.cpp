#include "Romans.h"
#include <string>
#include <vector>
#include <utility>

std::string toRomans(int arabic) {
    static std::vector<std::pair<int, std::string> > romanNumbers = {
        {1000, "M"},
        {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"},
         {90, "XC"},  {50, "L"},  {40, "XL"},  {10, "X"},
          {9, "IX"},   {5, "V"},   {4, "IV"},   {1, "I"}
    };

    std::string result;

    for (const auto& romanNumber : romanNumbers) {
        for(int a = arabic / romanNumber.first; a>0; --a)
            result += romanNumber.second;

        arabic = arabic % romanNumber.first;
    }

    return result;
}

