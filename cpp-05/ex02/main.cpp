#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main( void )
{
    Bureaucrat evaluator("evaluator", 1);
    ShrubberyCreationForm shrub("shrub");
    evaluator.executeForm(shrub);
    evaluator.signForm(shrub);
    evaluator.executeForm(shrub);
    RobotomyRequestForm robot("robot");
    evaluator.executeForm(robot);
    evaluator.signForm(robot);
    for (int i = 0; i < 4; i++)
        evaluator.executeForm(robot);
    PresidentialPardonForm pardon("pardon");
    evaluator.executeForm(pardon);
    evaluator.signForm(pardon);
    evaluator.executeForm(pardon);

    return (0);
}