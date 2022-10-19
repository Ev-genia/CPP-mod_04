/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:43:18 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/19 11:53:21 by mlarra           ###   ########.fr       */
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
	std::cout << std::endl;
	int		size = 4;
	Animal	*pets[size];
	int		k;

	k = 0;
	while (k < size)
	{
		if (k < size / 2)
			pets[k] = new Cat();
		else
			pets[k] = new Cat();
		k++;
	}

	k = 0;
	while (k < size)
	{
		pets[k]->makeSound();
		
		k++;
	}
	k = 0;
	while (k < size)
	{
		delete pets[k];
		k++;
	}
	// delete [] pets;
	return 0;
}
