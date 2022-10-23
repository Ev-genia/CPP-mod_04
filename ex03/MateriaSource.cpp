/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:03:36 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/23 19:05:23 by mlarra           ###   ########.fr       */
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
	// std::cout << "MateriaSource defoult constructor" << std::endl;
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
	// std::cout << "MateriaSource copy constructor" << std::endl;
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
	// std::cout << "MateriaSource destructor" << std::endl;
}

void	MateriaSource::learnMateria(AMateria * materia)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (types[i] == NULL)
		{
			types[i] = materia;
			return ;
		}
		i++;
	}
}

AMateria	*MateriaSource::createMateria(std::string enterType)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (types[i] != NULL && types[i]->getType() == enterType)
			return (types[i]->clone());
		i++;
	}
	return (NULL);
}
