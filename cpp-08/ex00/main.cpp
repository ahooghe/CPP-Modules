#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    std::vector<int> vec(arr, arr + 5);
    for (int i = 1; i < 7; i++)
    {
        try
        {
            ::easyfind(vec, i);
        }
        catch(const std::exception& e)
        {
            std::cout << "Value '" << i << "' not found" << std::endl;
        }
    }
    return (0);
}