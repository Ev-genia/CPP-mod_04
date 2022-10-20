/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:46:03 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/20 13:43:10 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
}

Ice	&Ice::operator=(const Ice & rhs)
{
	materiaType = rhs.materiaType;
	return (*this);
}

Ice::Ice(const Ice & src)
{
	*this = src;
}

Ice::~Ice()
{
}

AMateria	*Ice::clone() const
{
	AMateria	*amateriaIce = new Ice();

	return (amateriaIce);
}

void	Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
