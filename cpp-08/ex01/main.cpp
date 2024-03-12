#include "Span.hpp"
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()
#include <vector>

int main()
{
    srand(time(0)); // seed the random number generator

    Span sp(100000); // create a Span with capacity for 100000 integers

    std::vector<int> randomNumbers;
    for (int i = 0; i < 100000; ++i)
    {
        randomNumbers.push_back(rand()); // add a random number to the vector
    }

    sp.addRange(randomNumbers.begin(), randomNumbers.end()); // add the range to the Span

    try
    {
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    }
    catch (Span::NoSpanException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch (Span::FullSpanException &e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}