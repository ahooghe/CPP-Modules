#include "AForm.hpp"

AForm::AForm(std::string const name, int const gradeToSign, int gradeToExecute): _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    if (this->_gradeToSign < 1 || this->_gradeToExecute < 1)
        throw AForm::GradeTooHighException();
    if (this->_gradeToSign > 150 || this->_gradeToExecute > 150)
        throw AForm::GradeTooLowException();
}

AForm::~AForm()
{
}

AForm::AForm(AForm const &src): _name(src._name), _signed(false), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute)
{
    *this = src;
}

AForm &AForm::operator=(AForm const &src)
{
    this->_signed = src.getSigned();
    return (*this);
}

std::string AForm::getName() const
{
    return (this->_name);
}

bool AForm::getSigned() const
{
    return (this->_signed);
}

int AForm::getGradeToSign() const
{
    return (this->_gradeToSign);
}

int AForm::getGradeToExecute() const
{
    return (this->_gradeToExecute);
}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= this->_gradeToSign)
        this->_signed = true;
    else
        throw AForm::GradeTooLowException();
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return ("form grade too high");
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return ("form grade too low");
}

const char *AForm::FormNotSignedException::what() const throw()
{
    return ("form not signed");
}

std::ostream &operator<<(std::ostream &o, AForm const &src)
{
    o << "Form " << src.getName() << " is ";
    if (src.getSigned())
        o << "signed";
    else
        o << "not signed";
    o << " and requires a grade of " << src.getGradeToSign() << " to be signed and a grade of " << src.getGradeToExecute() << " to be executed." << std::endl;
    return (o);
}
