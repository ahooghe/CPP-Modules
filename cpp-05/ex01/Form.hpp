/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:37:41 by ahooghe           #+#    #+#             */
/*   Updated: 2024/02/21 16:53:11 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    std::string const _name;
    bool _signed;
    int const _gradeToSign;
    int const _gradeToExecute;
    
public:
    Form(std::string const name, int const gradeToSign);
    ~Form();
    Form(Form const &src);
    Form &operator=(Form const &src);
    
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
    
};

std::ostream &operator<<(std::ostream &o, Form const &src);

#endif