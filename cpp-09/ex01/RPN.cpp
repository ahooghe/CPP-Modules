#include "RPN.hpp"

RPN::RPN(std::string const &input)
{
    for (int i = 0; i < (int)input.size(); i++)
    {
        if (input[i] == ' ')
            continue;
        if (i % 2 == 0)
        {
            if ((input[i] >= '0' && input[i] <= '9'))
                _math.push_back(input[i] - '0');
            else if (input[i] == '-' || input[i] == '+'  || input[i] == '*' || input[i] == '/')
                _math.push_back(input[i]);
            else
                throw InvalidExpressionException();
        }
        else
            throw InvalidExpressionException();
    }
}

RPN::RPN(RPN const &src)
{
    *this = src;
}

RPN::~RPN()
{
}

RPN &RPN::operator=(RPN const &src)
{
    _math = src._math;
    return (*this);
}

void RPN::calculate()
{
    int value = _math[0];
    std::string op;
    std::vector<int> temp;

    for (int i = 1; i < (int)_math.size(); i++)
    {
        if (_math[i] == '-' || _math[i] == '+'  || _math[i] == '*' || _math[i] == '/')
        {
            op = _math[i];
            if (op == "-")
                value -= temp.back();
            if (op == "+")
                value += temp.back();
            if (op == "*")
                value *= temp.back();
            if (op == "/")
                value /= temp.back();
            temp.pop_back();
        }
        else
            temp.push_back(_math[i]);
    }
    std::cout << value << std::endl;
}

const char *RPN::InvalidExpressionException::what() const throw()
{
    return ("Invalid expression");
}