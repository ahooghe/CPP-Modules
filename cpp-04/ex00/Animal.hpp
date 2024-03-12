/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 21:36:21 by ahooghe           #+#    #+#             */
/*   Updated: 2023/10/21 22:20:56 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    private:
        std::string _type;
    public:
        Animal();
        virtual ~Animal();
        
        virtual void makeSound() const;
        
        std::string getType() const;
        void setType(std::string type);

        Animal &operator=(const Animal &src);
};

#endif