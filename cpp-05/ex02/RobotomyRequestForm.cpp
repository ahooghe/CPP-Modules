#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm(src), _target(src._target)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
    this->_target = src._target;
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (this->getSigned() == false)
    {
        throw AForm::FormNotSignedException();
    }
    if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    std::srand(std::time(0));
    std::cout << "B" << std::flush;
    for (int i = 0; i < 10; i++)
    {
        std::cout << "r" << std::flush;
        usleep(100000);
    }
    std::cout << "." << std::endl;
    if (std::rand() % 2 == 0)
        std::cout << this->_target << " has been robotomized successfully" << std::endl;
    else
        std::cout << this->_target << "'s robotomization failed" << std::endl;
}