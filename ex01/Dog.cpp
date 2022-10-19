/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:47:57 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/18 12:14:13 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog defoult constructor" << std::endl;
}

Dog	& Dog::operator=(const Dog &src)
{
	this->type = src.type;
	return (*this);
}

Dog::Dog(const Dog & rhs)
{
	std::cout << "Dog copy constructor" << std::endl;
	*this = rhs;
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Dog make sound Gav" << std::endl;
}
