#include "PMergeMe.hpp"

PMergeMe::PMergeMe(std::list<int> &args) : _listA(args)
{
    std::cout << "Before: " << std::flush;
    for (std::list<int>::iterator it = this->_listA.begin(); it != this->_listA.end(); it++)
    {
        std::cout << *it << " " << std::flush;
    } 
    std::cout << std::endl;
    std::copy(_listA.begin(), _listA.end(), std::back_inserter(_dequeA));
}

PMergeMe::PMergeMe(PMergeMe const &src)
{
    *this = src;
}

PMergeMe::~PMergeMe()
{
}

PMergeMe &PMergeMe::operator=(PMergeMe const &src)
{
    _dequeA = src._dequeA;
    _dequeB = src._dequeB;
    _listA = src._listA;
    _listB = src._listB;
    return (*this);
}

void PMergeMe::mergeSort()
{
    clock_t start = clock();
    dequeSort();
    clock_t end = clock();
    clock_t start2 = clock();
    listSort();
    clock_t end2 = clock();
    std::cout << "After: " << std::flush;
    for (std::list<int>::iterator it = this->_listB.begin(); it != this->_listB.end(); it++)
        std::cout << *it << " " << std::flush;
    std::cout << std::endl;
    std::cout << "Time to process a range of " << _listA.size() << " elements with std::list : " << static_cast<double>(end2 - start2) / CLOCKS_PER_SEC * 1000000000 << "ns" << std::endl;
    std::cout << "Time to process a range of " << _listA.size() << " elements with std::deque : " << static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000000000 << "ns" << std::endl;
}


struct PairComparator {
    bool operator() (const std::pair<int, int> &a, const std::pair<int, int> &b) {
        return a.first < b.first;
    }
};

void PMergeMe::listSort()
{
    int size = _listA.size();
    int tmp = -1;
    if (size % 2 != 0)
    {
        tmp = _listA.back();
        _listA.pop_back();
    }
    for (int i = 0; i < size / 2; i++)
    {
        _listB.push_back(_listA.front());
        _listA.pop_front();
    }
    
    std::list<std::pair<int, int> > pairs;
    std::list<int>::iterator itA = _listA.begin();
    std::list<int>::iterator itB = _listB.begin();

    while (itA != _listA.end() && itB != _listB.end())
    {
        if (*itA < *itB)
        {
            pairs.push_back(std::make_pair(*itA, *itB));
        }
        else
        {
            pairs.push_back(std::make_pair(*itB, *itA));
            
        }
        itA++;
        itB++;
    }

    PairComparator pairComparator;
    pairs.sort(pairComparator);

    _listA.clear();
    _listB.clear();

    std::list<std::pair<int, int> >::iterator itPair;
    for (itPair = pairs.begin(); itPair != pairs.end(); ++itPair)
    {
        _listA.push_back(itPair->first);
        _listA.push_back(itPair->second);
    }

    if (tmp != -1)
        _listA.push_back(tmp);

    while (!_listA.empty())
    {
        std::list<int>::iterator min_it = std::min_element(this->_listA.begin(), this->_listA.end());
            _listB.push_back(*min_it);
            _listA.erase(min_it);
    }
}

void PMergeMe::dequeSort()
{
    int size = _dequeA.size();
    int tmp = -1;
    if (size % 2 != 0)
    {
        tmp = _dequeA.back();
        _dequeA.pop_back();
    }
    for (int i = 0; i < size / 2; i++)
    {
        _dequeB.push_back(_dequeA.front());
        _dequeA.pop_front();
    }
    
    std::list<std::pair<int, int> > pairs;
    std::deque<int>::iterator itA = _dequeA.begin();
    std::deque<int>::iterator itB = _dequeB.begin();

    while (itA != _dequeA.end() && itB != _dequeB.end())
    {
        if (*itA < *itB)
        {
            pairs.push_back(std::make_pair(*itA, *itB));
        }
        else
        {
            pairs.push_back(std::make_pair(*itB, *itA));
            
        }
        itA++;
        itB++;
    }

    PairComparator pairComparator;
    pairs.sort(pairComparator);

    _dequeA.clear();
    _dequeB.clear();

    std::list<std::pair<int, int> >::iterator itPair;
    for (itPair = pairs.begin(); itPair != pairs.end(); ++itPair)
    {
        _dequeA.push_back(itPair->first);
        _dequeA.push_back(itPair->second);
    }

    if (tmp != -1)
        _dequeA.push_back(tmp);

    while (!_dequeA.empty())
    {
        std::deque<int>::iterator min_it = std::min_element(this->_dequeA.begin(), this->_dequeA.end());
            _dequeB.push_back(*min_it);
            _dequeA.erase(min_it);
    }
}