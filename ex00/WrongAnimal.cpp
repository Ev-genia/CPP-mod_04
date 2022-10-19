/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:44:40 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/19 12:26:06 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("Empty")
{
	std::cout << "WrongAnimal defoult constructor" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &rhs)
{
	this->type = rhs.type;
	return (*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal & src)
{
	std::cout << "WrongAnimal copy constructor" << std::endl;
	*this = src;
}

WrongAnimal::WrongAnimal(std::string enterType): type(enterType)
{
	std::cout << "WrongAnimal constructor with type = " << enterType << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor" << std::endl;
}

std::string	WrongAnimal::getType()
{
	return (type);
}

void	WrongAnimal::makeSound()
{
	std::cout << "WrongAnimal doesn't make sound" << std::endl;
}
