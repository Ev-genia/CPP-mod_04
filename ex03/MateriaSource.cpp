/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:03:36 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/20 14:06:17 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	int	i;

	i = 0;
	while (i < 4)
	{
		types[i] = NULL;
		i++;
	}
}

MateriaSource	&MateriaSource::operator=(const MateriaSource & rhs)
{
	int	i;

	i = 0;
	if (this != &rhs)
	{
		while (i < 4)
		{
			if (types[i] != NULL)
				delete types[i];
			types[i] = rhs.types[i]->clone();
			i++;
		}
	}
	return (*this);
}

MateriaSource::MateriaSource(const MateriaSource & src)
{
	*this = src;
}

MateriaSource::~MateriaSource()
{
	int	i;

	i = 0;
	while (i < 4)
	{
		delete types[i];
		i++;
	}
}

void	MateriaSource::learnMateria(AMateria * materia)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (types[i] == NULL)
		{
			types[i] == materia;
			return ;
		}
		i++;
	}
}
