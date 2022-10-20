/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:51:59 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/20 13:22:18 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): name("no name")
{
}

Character	&Character::operator=(const Character & rhs)
{
	name = rhs.name;
	return (*this);
}

Character::Character(const Character & src)
{
	*this = src;
}

Character::~Character()
{
}

Character::Character(std::string enterName): name(enterName)
{
}

std::string const	&Character::getName() const
{
	return (name);
}
