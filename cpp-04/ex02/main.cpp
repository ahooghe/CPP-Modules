/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 21:56:04 by ahooghe           #+#    #+#             */
/*   Updated: 2023/12/10 15:17:10 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();

	std::cout << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << std::endl;
	dog->makeSound();
	cat->makeSound();
	std::cout << std::endl;
	const Animal *newDog = dog->clone();
	const Animal *newCat = cat->clone();

	std::cout << std::endl;
	newDog->makeSound();
	newCat->makeSound();
	std::cout << std::endl;
	
	delete dog;
	delete cat;
	delete newDog;
	delete newCat;

	std::cout << std::endl;
	const Animal *animals[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		animals[i]->makeSound();
	}
	for (int i = 0; i < 10; i++)
		delete animals[i];
	return (0);
}
