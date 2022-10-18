/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ishak.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:25:48 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/18 12:38:48 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ishak.hpp"

Ishak::Ishak(): Animal("Ishak")
{
	std::cout << "Ishak defoult constructor" << std::endl;
}

Ishak	&Ishak::operator=(const Ishak &rhs)
{
	this->type = rhs.type;
	return (*this);
}

Ishak::Ishak(const Ishak &src)
{
	*this = src;
}

Ishak::~Ishak()
{
	std::cout << "Ishak destructor" << std::endl;
}

void	Ishak::makeSound() const
{
	std::cout << "Ishak make sound Ia" << std::endl;
}
