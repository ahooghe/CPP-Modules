#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void )
{
    try {
        Bureaucrat bureaucrat("evaluator", 20);
        Form form("form", 10);

        bureaucrat.signForm(form);
    } 
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    try {
        Bureaucrat bureaucrat("evaluator", 20);
        Form form("form", 20);

        bureaucrat.signForm(form);
    } 
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    try {
        Bureaucrat bureaucrat("evaluator", 20);
        Form form("form", 30);

        bureaucrat.signForm(form);
    } 
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    try {
        Bureaucrat bureaucrat("evaluator", 20);
        Form form("form", 160);

        bureaucrat.signForm(form);
    } 
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    try {
        Bureaucrat bureaucrat("evaluator", 20);
        Form form("form", 0);

        bureaucrat.signForm(form);
    } 
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}