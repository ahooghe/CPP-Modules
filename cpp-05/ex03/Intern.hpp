#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <map>
#include <functional>

class Intern
{
	private:
		std::map<std::string, AForm *(*)(const std::string &)> _forms;
	public:
		Intern();
		Intern(Intern const &src);
		~Intern();

		Intern &operator=(Intern const &src);

		AForm *makeForm(const std::string &formName, const std::string &target);

		class FormNotFoundException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

#endif