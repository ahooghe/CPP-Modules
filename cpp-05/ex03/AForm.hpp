/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:37:41 by ahooghe           #+#    #+#             */
/*   Updated: 2024/03/12 03:26:44 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
    std::string const _name;
    bool _signed;
    int const _gradeToSign;
    int const _gradeToExecute;

    AForm();
    
public:
    AForm(std::string const name, int const gradeToSign, int gradeToExecute);
    AForm(AForm const &src);
    virtual ~AForm();
    AForm &operator=(AForm const &src);
    
    std::string getName() const;
    bool getSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;

    void beSigned(Bureaucrat &bureaucrat);

    class GradeTooHighException : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };

    class FormNotSignedException : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
        

    virtual void execute(Bureaucrat const &executor) const = 0;
    
};

std::ostream &operator<<(std::ostream &o, AForm const &src);

#endif