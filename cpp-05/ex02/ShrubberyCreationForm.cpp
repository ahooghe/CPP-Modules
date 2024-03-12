#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm(src), _target(src._target)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
    this->_target = src._target;
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (this->getSigned() == false)
    {
        throw AForm::FormNotSignedException();
    }
    if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    std::string filename = this->_target + "_shrubbery";
    std::ofstream file(filename.c_str());
    file << "              .     .  .      +     .      .          ." << std::endl;
    file << "     .       .      .     #       .           ." << std::endl;
    file << "        .      .         ###            .      .      ." << std::endl;
    file << "      .      .   \"#:. .:##\"##:. .:#\"  .      ." << std::endl;
    file << "          .      . \"####\"###\"####\"  ." << std::endl;
    file << "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       ." << std::endl;
    file << "  .             \"#########\"#########\"        .        ." << std::endl;
    file << "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       ." << std::endl;
    file << "     .     .  \"#######\"\"##\"##\"\"#######\"                  ." << std::endl;
    file << "                .\"##\"#####\"#####\"##\"           .      ." << std::endl;
    file << "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     ." << std::endl;
    file << "      .     \"#######\"##\"#####\"##\"#######\"      .     ." << std::endl;
    file << "    .    .     \"#####\"\"#######\"\"#####\"    .      ." << std::endl;
    file << "            .     \"      000      \"    .     ." << std::endl;
    file << "       .         .   .   000     .        .       ." << std::endl;
    file << ".. .. ..................O000O........................ ......" << std::endl;
    file.close();
}
