/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:47:45 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/20 13:44:53 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
}

Cure	&Cure::operator=(const Cure & rhs)
{
	materiaType = rhs.materiaType;
	return (*this);
}

Cure::Cure(const Cure & src)
{
	*this = src;
}

Cure::~Cure()
{
}

AMateria	*Cure::clone() const
{
	AMateria	*amateriaCure = new Cure();
	return (amateriaCure);
}

void	Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
