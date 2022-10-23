/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:47:45 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/23 18:57:16 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
	// std::cout << "Cure defoult constructor" << std::endl;
}

Cure	&Cure::operator=(const Cure & rhs)
{
	materiaType = rhs.materiaType;
	return (*this);
}

Cure::Cure(const Cure & src)//: AMateria(src)
{
	*this = src;
	// std::cout << "Cure copy constructor" << std::endl;
}

Cure::~Cure()
{
	// std::cout << "Cure destructor" << std::endl;
}

Cure	*Cure::clone() const
{
	return new Cure(*this);
}

void	Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
