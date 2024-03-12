#include "Intern.hpp"

AForm *createShrubberyCreationForm(const std::string &target) {
    return new ShrubberyCreationForm(target);
}

AForm *createRobotomyRequestForm(const std::string &target) {
    return new RobotomyRequestForm(target);
}

AForm *createPresidentialPardonForm(const std::string &target) {
    return new PresidentialPardonForm(target);
}

Intern::Intern() 
{
    _forms["shrubbery creation"] = &createShrubberyCreationForm;
    _forms["robotomy request"] = &createRobotomyRequestForm;
    _forms["presidential pardon"] = &createPresidentialPardonForm;
}

Intern::Intern(Intern const &src) 
{
    *this = src;
}

Intern::~Intern() 
{

}

Intern &Intern::operator=(Intern const &src) 
{
    (void)src;
    return *this;
}

AForm *Intern::makeForm(const std::string &formName, const std::string &target) 
{
    AForm *form = NULL;
    if (_forms.find(formName) != _forms.end())
        form = _forms[formName](target);
    else
        throw FormNotFoundException();
    return form;

}

const char *Intern::FormNotFoundException::what() const throw() {
    return "Form not defined";
}