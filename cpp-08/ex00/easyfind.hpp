#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>

template <typename T>
int easyfind(T &ctnr, int n)
{
    typename T::iterator it = std::find(ctnr.begin(), ctnr.end(), n);
    if (it == ctnr.end())
        throw std::exception();
    return *it;
}

#endif