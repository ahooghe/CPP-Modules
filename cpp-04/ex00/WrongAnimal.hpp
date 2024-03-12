/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 21:36:21 by ahooghe           #+#    #+#             */
/*   Updated: 2023/12/10 13:26:51 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    private:
        std::string _type;
    public:
        WrongAnimal();
        ~WrongAnimal();
        
        void makeSound() const;
        
        std::string getType() const;
        void setType(std::string type);

        WrongAnimal &operator=(const WrongAnimal &src);
};

#endif