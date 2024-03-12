#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main( void )
{
    Intern intern;
    AForm *form;
    try
    {
        form = intern.makeForm("shrubbery creation", "shrub");
        std::cout << *form << std::endl;
        delete form;
        form = NULL;
        form = intern.makeForm("robotomy request", "robot");
        std::cout << *form << std::endl;
        delete form;
        form = NULL;
        form = intern.makeForm("presidential pardon", "pardon");
        std::cout << *form << std::endl;
        delete form;
        form = NULL;
        form = intern.makeForm("nonexistent form", "nonexistent");
        std::cout << *form << std::endl;
        delete form;
        form = NULL;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        if (form)
            delete form;
    }
    return (0);
}