#include "PMergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc <= 3)
    {
        std::cout << "Error." << std::endl;
        return (1);
    }
    std::list<int> args;
    try
    {
        for (int i = 1; i < argc; i++)
            args.push_back(std::atoi(argv[i]));
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    PMergeMe pmerge(args);
    pmerge.mergeSort();
    return (0);
}   