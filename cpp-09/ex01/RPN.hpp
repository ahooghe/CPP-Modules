#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <vector>
#include <string>

class RPN
{
    private:
        std::vector<int> _math;
    public:
        RPN(std::string const &input);
        RPN(RPN const &src);
        ~RPN();

        RPN &operator=(RPN const &src);

        void calculate();

        class InvalidExpressionException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};

#endif