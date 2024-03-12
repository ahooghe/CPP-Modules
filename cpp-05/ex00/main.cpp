#include "Bureaucrat.hpp"

int main( void )
{
    for (int i = 0; i <= 160; i += 40)
    {
        try {
            std::cout << "Testing new bureaucrat with grade " << i << std::endl << std::endl;
            Bureaucrat bureaucrat("evaluator", i);

            std::cout << bureaucrat << std::endl;

            bureaucrat.incrementGrade();
            bureaucrat.decrementGrade();
        } catch (Bureaucrat::GradeTooHighException &e) {
            std::cout << e.what() << std::endl;
        } catch (Bureaucrat::GradeTooLowException &e) {
            std::cout << e.what() << std::endl;
        }
    }
    return (0);
}