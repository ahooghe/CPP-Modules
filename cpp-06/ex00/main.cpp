#include "ScalarConverter.hpp"

/*int main()
{
    ScalarConverter::convert("0.5");
    ScalarConverter::convert("0");
    
    ScalarConverter::convert("nan");
    ScalarConverter::convert("nanf");
    ScalarConverter::convert("inf");
    ScalarConverter::convert("inff");
    ScalarConverter::convert("-inf");
    ScalarConverter::convert("-inff");

    ScalarConverter::convert("a");

    ScalarConverter::convert("42");
    ScalarConverter::convert("42.0");
    ScalarConverter::convert("42.0f");
    ScalarConverter::convert("42.42");
    ScalarConverter::convert("42.42f");

    ScalarConverter::convert("1e309");  // outside the range of double
    ScalarConverter::convert("1e39f");  // outside the range of float
    ScalarConverter::convert("not a number");  // not a valid number representation
    return (0);
}*/

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Usage: ./convert <value>" << std::endl;
        return (1);
    }
    ScalarConverter::convert(argv[1]);
    return (0);
}