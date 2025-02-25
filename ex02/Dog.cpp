/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:47:57 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/24 12:36:11 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog defoult constructor" << std::endl;
	brain = new Brain();
}

Dog	& Dog::operator=(const Dog &rhs)
{
	if (this != &rhs)
	{
		type = rhs.type;
		*brain = *rhs.brain;
	}
	return (*this);
}

Dog::Dog(const Dog & src)
{
	std::cout << "Dog copy constructor" << std::endl;
	brain = new Brain();
	*this = src;
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
	delete brain;
}

void	Dog::makeSound() const
{
	std::cout << "Dog make sound Gav" << std::endl;
}

std::string	Dog::getBrain()
{
	return (brain->generateIdea());
}