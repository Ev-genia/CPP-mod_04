/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:43:18 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/20 16:28:30 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Ishak.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	// std::cout << "*******************" << std::endl;
	std::cout << std::endl;
	int		size = 4;
	Animal	*pets[size];
	int		k;
	// pets[0]->makeSound();
	std::cout << "*******************" << std::endl;
	k = 0;
	while (k < size)
	{
		if (k < size / 2)
			pets[k] = new Cat();
		else
			pets[k] = new Dog();
		k++;
	}
	std::cout << "*******************" << std::endl;
	k = 0;
	while (k < size)
	{
		pets[k]->makeSound();
		k++;
	}
	k = 0;
	std::cout << "*******************" << std::endl;
	while (k < size)
	{
		delete pets[k];
		k++;
	}
	std::cout << "*******************" << std::endl;
	Cat	*kitten = new Cat();
	Cat	*dolly = new Cat();

	dolly = kitten;
	std::cout << "kitten: " << kitten->getBrain() << std::endl;
	std::cout << "deep copy: " << dolly->getBrain() << std::endl;
	std::cout << "kitten: " << kitten->getPointerBrain() << std::endl;
	std::cout << "deep copy: " << dolly->getPointerBrain() << std::endl;
	std::cout << "*******************" << std::endl;
	Animal	animal;
	animal.makeSound();
	return 0;
}
