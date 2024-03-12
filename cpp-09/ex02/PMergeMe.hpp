#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <ctime>
#include <stack>
#include <list>
#include <algorithm>

class PMergeMe
{
    private:
        std::deque<int> _dequeA;
        std::deque<int> _dequeB;
        std::list<int> _listA;
        std::list<int> _listB;
    public:
        PMergeMe(std::list<int> &input);
        PMergeMe(PMergeMe const &src);
        ~PMergeMe();

        PMergeMe &operator=(PMergeMe const &src);

        void dequeSort();
        void listSort();
        void mergeSort();
};

#endif