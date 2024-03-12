#include "Span.hpp"

Span::Span(unsigned int N) : _N(N)
{
    _vector.reserve(N);
}

Span::Span(Span const &src)
{
    *this = src;
}

Span::~Span()
{
}

Span &Span::operator=(Span const &src)
{
    _N = src._N;
    _vector = src._vector;
    return (*this);
}

void Span::addNumber(int number)
{
    if (_vector.size() == _N)
        throw Span::FullSpanException();
    _vector.push_back(number);
}

const char *Span::FullSpanException::what() const throw()
{
    return ("span is full");
}

int Span::shortestSpan() const
{
    if (_vector.size() < 2)
        throw Span::NoSpanException();
    int tmp = abs(_vector[1] - _vector[0]);
    for (int i = 2; i < (int)_vector.size(); i++)
    {
        if (abs(_vector[i] - _vector[i - 1])  < tmp)
            tmp = abs(_vector[i] - _vector[i - 1]) ;
    }
    return (tmp);
}

int Span::longestSpan() const
{
    if (_vector.size() < 2)
        throw Span::NoSpanException();
    int tmp = abs(_vector[1] - _vector[0]);
    for (int i = 2; i < (int)_vector.size(); i++)
    {
        if (abs(_vector[i] - _vector[i - 1]) > tmp)
            tmp = abs(_vector[i] - _vector[i - 1]);
    }
    return (tmp);
}

const char *Span::NoSpanException::what() const throw()
{
    return ("Span is empty or only contains one element");
}

