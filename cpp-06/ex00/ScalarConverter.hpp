#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <iomanip>

class ScalarConverter
{
    private:
        ScalarConverter();
    public:
        ~ScalarConverter();

        static void convert(const std::string &input);
};

#endif