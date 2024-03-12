/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 21:47:47 by ahooghe           #+#    #+#             */
/*   Updated: 2023/12/10 15:12:11 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
    private:
        Brain *_brain;
    public:
        Dog();
        Dog(Dog const &src);
        virtual ~Dog();
        virtual Dog* clone() const { return new Dog(*this); }
        virtual void makeSound() const;
        
        Dog &operator=(const Dog &src);
};

#endif