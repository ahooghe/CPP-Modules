/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 21:43:34 by ahooghe           #+#    #+#             */
/*   Updated: 2023/12/10 14:43:27 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
    private:
        Brain *_brain;
    public:
        Cat();
        Cat(Cat const &src);
        virtual ~Cat();
        virtual Cat* clone() const { return new Cat(*this); }
        
        virtual void makeSound() const;
        
        Cat &operator=(const Cat &src);
};

#endif