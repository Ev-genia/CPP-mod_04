/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:48:14 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/19 12:57:36 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Cat defoult constructor" << std::endl;
	this->brain = new Brain();
}

Cat	&Cat::operator=(const Cat &rhs)
{
	if (this == &rhs)
		return (*this);
	delete brain;
	brain = new Brain(*rhs.brain);
	brain = rhs.brain;
	type = rhs.type;
	return (*this);
}

Cat::Cat(const Cat &src)
{
	std::cout << "Cat copy constructor" << std::endl;
	*this = src;
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
	delete brain;
}

void	Cat::makeSound() const
{
	std::cout << "Cat make sound Myau" << std::endl;
}

Brain	*Cat::getBrain() const
{
	return (brain);
}
