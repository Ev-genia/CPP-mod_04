/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:51:59 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/23 19:02:02 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): name("no name")
{
	fillNullInventary();
	// std::cout << "Character defoult constructor" << std::endl;
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
	// std::cout << "Character copy constructor" << std::endl;
}

Character::~Character()
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (materiaInventary[i] != NULL)
			delete materiaInventary[i];
		i++;
	}
	// std::cout << "Destructor Character" << std::endl;
}

Character::Character(std::string enterName): name(enterName)
{
	fillNullInventary();
	// std::cout << "Character constructor with name" << std::endl;
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
	int	i;

	i = 0;
	while (i < 4)
	{
		if (materiaInventary[i] == NULL)
		{
			materiaInventary[i] = m;
			break;
		}
		i++;
	}
}

void	Character::unequip(int ind)
{
	if (ind > 3 || ind < 0 || materiaInventary[ind] == NULL)
		return ;
	else
		materiaInventary[ind] = NULL;
}

void	Character::use(int ind, ICharacter & target)
{
	if (ind > 3 || ind < 0 || materiaInventary[ind] == NULL)
		return ;
	else
		materiaInventary[ind]->use(target);
}
