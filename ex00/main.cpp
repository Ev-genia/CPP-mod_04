/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:43:18 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/19 12:54:05 by mlarra           ###   ########.fr       */
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
	const Animal* meta = new Animal();
	std::cout << "------------------" << std::endl;
	const Animal cop(*meta);
	
	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound!
	// j->makeSound();
	// meta->makeSound();

	// Animal *k = new Ishak();
	// k->makeSound();
	// std::cout << "------------------" << std::endl;
	// std::cout << "------------------" << std::endl;
	// WrongAnimal	*a = new WrongCat();
	// WrongAnimal	*wa = new WrongAnimal();
	// WrongCat *wc = new WrongCat();
	// std::cout << "------------------" << std::endl;
	// std::cout << a->getType() << std::endl;
	// std::cout << "---WrongAnimal	*a = new WrongCat()---" << std::endl;
	// a->makeSound();
	// std::cout << "==================" << std::endl;
	// std::cout << "---WrongAnimal	*wa = new WrongAnimal()---" << std::endl;
	// wa->makeSound();
	// std::cout << "---WrongCat *wc = new WrongCat()---" << std::endl;
	// wc->makeSound();

	// delete meta;
	// delete j;
	// delete i;
	// delete k;
	// delete wc;
	// delete a;
	// delete wa;
	return 0;
}
