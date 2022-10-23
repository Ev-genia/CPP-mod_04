/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:46:03 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/23 18:57:27 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
	// std::cout << "Ice defoult constructor" << std::endl;
}

Ice	&Ice::operator=(const Ice & rhs)
{
	materiaType = rhs.materiaType;
	return (*this);
}

Ice::Ice(const Ice & src)
{
	*this = src;
	// std::cout << "Ice copy constructor" << std::endl;
}

Ice::~Ice()
{
	// std::cout << "Ice destructor" << std::endl;
}

Ice	*Ice::clone() const
{
	return new Ice(*this);
}

void	Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
