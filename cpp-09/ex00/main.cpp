
#include "BitcoinExchange.hpp"
#include <fstream>
int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Usage: ./bitcoin [filename]" << std::endl;
        return (1);
    }
    std::ifstream file(argv[1]);
    if (!file.is_open())
    {
        std::cout << "Error: could not open file" << std::endl;
        return (1);
    }
    BitcoinExchange value;
    value.exchange(file);
    return (0);
}