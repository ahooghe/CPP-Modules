#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
    private:
        unsigned int _N;
        std::vector<int> _vector;

    public:
        Span(unsigned int N);
        Span(Span const &src);
        ~Span();

        Span &operator=(Span const &src);

        void addNumber(int number);

        class FullSpanException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

        int shortestSpan() const;
        int longestSpan() const;

        class NoSpanException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

    template <typename T>
    void addRange(T begin, T end)
    {
        if (_vector.size() + std::distance(begin, end) > _N)
            throw Span::FullSpanException();
        _vector.insert(_vector.end(), begin, end);
    }
};

#endif