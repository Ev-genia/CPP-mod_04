/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:48:14 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/18 13:02:16 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Cat defoult constructor" << std::endl;
}

Cat	&Cat::operator=(const Cat & src)
{
	this->type = src.type;
	return (*this);
}

Cat::Cat(const Cat &rhs)
{
	std::cout << "Cat copy constructor" << std::endl;
	*this = rhs;
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Cat make sound Myau" << std::endl;
}
