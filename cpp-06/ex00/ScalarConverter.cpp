#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
}

void ScalarConverter::convert(const std::string &input)
{
    try 
    {
        int val = std::atoi(input.c_str());
        std::cout << "char: " << std::flush;  
        if (std::isprint(val))
            std::cout << "'" << static_cast<char>(val) << "'" << std::endl;
        else
            throw std::exception();
    }
    catch (std::exception &e)
    {
        std::cout << "cannot be printed" << std::endl;
    }
    try 
    {
        int val = std::atoi(input.c_str());
        std::cout << "int: " << std::flush;
        if (input == "nan" || input == "nanf" || input == "+inf" || input == "+inff" || input == "-inf" || input == "-inff")
            throw std::exception();
        if (val >= std::numeric_limits<int>::min() && val <= std::numeric_limits<int>::max())
            std::cout << "'" << static_cast<int>(val) << "'" << std::endl;
        else
            throw std::exception();
    }
    catch (std::exception &e)
    {
        std::cout << "cannot be printed" << std::endl;
    }
    try 
    {
        float val = std::atof(input.c_str());
        std::cout << "float: " << std::flush;
        if (std::isinf(val) || std::isnan(val) || (val >= -std::numeric_limits<float>::max() && val <= std::numeric_limits<float>::max()) || val == 0.0f)
            std::cout << "'" << std::fixed << std::setprecision(1) << static_cast<float>(val) << "f'" << std::endl;
        else
            throw std::exception();
    }
    catch (std::exception &e)
    {
        std::cout << "cannot be printed" << std::endl;
    }

    try 
    {
        double val = std::strtod(input.c_str(), NULL);
        std::cout << "double: " << std::flush;
        if (std::isinf(val) || std::isnan(val) || (val >= -std::numeric_limits<double>::max() && val <= std::numeric_limits<double>::max()) || val == 0.0)
            std::cout << "'" << std::fixed << std::setprecision(1) << static_cast<double>(val) << "'" << std::endl;
        else
            throw std::exception();
    }
    catch (std::exception &e)
    {
        std::cout << "cannot be printed" << std::endl;
    }

    std::cout << std::endl;
}