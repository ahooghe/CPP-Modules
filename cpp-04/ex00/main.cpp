/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 21:56:04 by ahooghe           #+#    #+#             */
/*   Updated: 2023/12/10 13:47:54 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main()
{
    {
        const Animal *meta = new Animal();
        const Animal *dog = new Dog();
        const Animal *cat = new Cat();

        std::cout << dog->getType() << " " << std::endl;
        std::cout << cat->getType() << " " << std::endl;
        meta->makeSound();
        dog->makeSound();
        cat->makeSound();

        delete meta;
        delete dog;
        delete cat;
    }
    std::cout << std::endl << std::endl;
    {
        const WrongAnimal *wrongAnimal = new WrongAnimal();
        const WrongAnimal *wrongDog = new WrongDog();
        const WrongAnimal *wrongCat = new WrongCat();

        std::cout << wrongDog->getType() << " " << std::endl;
        std::cout << wrongCat->getType() << " " << std::endl;
        wrongAnimal->makeSound();
        wrongDog->makeSound();
        wrongCat->makeSound();

        delete wrongAnimal;
        delete wrongDog;
        delete wrongCat;
    }
    return (0);
}
