/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:06:30 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/18 13:20:27 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat defoult constructor" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat & rhs)
{
	this->type = rhs.type;
	return (*this);
}

WrongCat::WrongCat(const WrongCat &src)
{
	std::cout << "WrongCat copy constructor" << std::endl;
	*this = src;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor" << std::endl;
}

void	WrongCat::makeSound()
{
	std::cout << "WrongCat make sound BlaBlaBla" << std::endl;
}
