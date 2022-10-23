/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:40:12 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/23 19:01:57 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria():materiaType("no type")
{
	// std::cout << "AMateria defoult constructor" << std::endl;
}

AMateria	&AMateria::operator=(const AMateria &rhs)
{
	materiaType = rhs.materiaType;
	return (*this);
}

AMateria::AMateria(const AMateria & src)
{
	*this = src;
	// std::cout << "AMateria copy constructor" << std::endl;
}

AMateria::~AMateria()
{
	// std::cout << "Destructor AMateria" << std::endl;
}

AMateria::AMateria(std::string const & type): materiaType(type)
{
	// std::cout << "AMateria constructor with materiaType" << std::endl;
}

std::string const	&AMateria::getType() const
{
	return (materiaType);
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "defoult use: " << target.getName() << std::endl;
}
