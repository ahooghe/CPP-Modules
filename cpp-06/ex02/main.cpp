#include "Base.hpp"
#include <unistd.h>
#include <iostream>

int main(void)
{
    for (int i = 0; i < 10; i++)
    {
        std::cout << "Attempt " << i + 1 << ": " << std::endl;
        Base *base = generate();
        std::cout << "Pointer: " << std::flush;
        identify(base);
        std::cout << "Reference: " << std::flush;
        identify(*base);
        delete base;
        usleep(1000000);
    }
    return (0);
}