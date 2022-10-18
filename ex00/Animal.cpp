/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 23:10:35 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/18 12:38:52 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("None")
{
	std::cout << "Animal defoult consructor" << std::endl;
}

Animal & Animal::operator=(const Animal &rhs)
{
	this->type = rhs.type;
	return (*this);
}

Animal::Animal(const Animal & src)
{
	std::cout << "Animal copy constructor" << std::endl;
	*this = src;
}

Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
}

Animal::Animal(std::string enterType): type(enterType)
{
	std::cout << "Animal constructor with type = " << enterType << std::endl;
}

const std::string	& Animal::getType() const
{
	return (this->type);
}

void	Animal::makeSound() const
{
	std::cout << "Animal make sound" << std::endl;
}
