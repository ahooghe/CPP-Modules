#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename Iter>
void iter(Iter *array, int length, void (*function)(Iter const &element))
{
    for (int i = 0; i < length; i++)
    {
        function(array[i]);
    }
}

#endif