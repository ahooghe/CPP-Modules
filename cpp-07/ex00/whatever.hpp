#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename Whatever>
void swap(Whatever &a, Whatever &b)
{
    Whatever tmp = a;
    a = b;
    b = tmp;
}

template <typename Whatever>
Whatever &min(Whatever &a, Whatever &b)
{
    return (a < b ? a : b);
}

template <typename Whatever>
Whatever &max(Whatever &a, Whatever &b)
{
    return (a > b ? a : b);
}

#endif