/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:40:12 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/20 13:14:43 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria():materiaType("no type")
{
}

AMateria	&AMateria::operator=(const AMateria &rhs)
{
	materiaType = rhs.materiaType;
	return (*this);
}

AMateria::AMateria(const AMateria & src)
{
	*this = src;
}

AMateria::~AMateria()
{
}
