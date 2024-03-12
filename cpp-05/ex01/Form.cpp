#include "Form.hpp"

Form::Form(std::string const name, int const gradeToSign): _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(0)
{
    if (this->_gradeToSign < 1)
        throw Form::GradeTooHighException();
    if (this->_gradeToSign > 150)
        throw Form::GradeTooLowException();
}

Form::~Form()
{
}

Form::Form(Form const &src): _name(src._name), _signed(false), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute)
{
    *this = src;
}

Form &Form::operator=(Form const &src)
{
    this->_signed = src.getSigned();
    return (*this);
}

std::string Form::getName() const
{
    return (this->_name);
}

bool Form::getSigned() const
{
    return (this->_signed);
}

int Form::getGradeToSign() const
{
    return (this->_gradeToSign);
}

int Form::getGradeToExecute() const
{
    return (this->_gradeToExecute);
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= this->_gradeToSign)
        this->_signed = true;
    else
        throw Form::GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("form grade too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("form grade too low");
}

std::ostream &operator<<(std::ostream &o, Form const &src)
{
    o << "Form " << src.getName() << " is ";
    if (src.getSigned())
        o << "signed";
    else
        o << "not signed";
    o << " and requires a grade of " << src.getGradeToSign() << " to be signed and a grade of " << src.getGradeToExecute() << " to be executed." << std::endl;
    return (o);
}
