/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:51:59 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/20 18:51:19 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): name("no name")
{
	fillNullInventary();
}

Character	&Character::operator=(const Character & rhs)
{
	int	i;
	
	name = rhs.name;
	i = 0;
	while (i < 4)
	{
		if (this->materiaInventary[i] != NULL)
			delete materiaInventary[i];
		if (rhs.materiaInventary[i] != NULL)
			materiaInventary[i] = rhs.materiaInventary[i]->clone();
		else
			materiaInventary[i] = NULL;
		i++;
	}
	return (*this);
}

Character::Character(const Character & src)
{
	*this = src;
}

Character::~Character()
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (materiaInventary[i] != NULL)
			delete materiaInventary[i];
	}
}

Character::Character(std::string enterName): name(enterName)
{
	fillNullInventary();
}

std::string const	&Character::getName() const
{
	return (name);
}

void	Character::fillNullInventary()
{
	int	i;

	i = 0;
	while (i < 4)
	{
		materiaInventary[i] = NULL;
		i++;
	}
}

void	Character::equip(AMateria * m)
{
	
}
