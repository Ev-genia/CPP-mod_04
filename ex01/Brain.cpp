/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:59:19 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/20 16:34:53 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain defoult constructor" << std::endl;
	setIdea();
}

Brain	&Brain::operator=(const Brain &rhs)
{
	int	i;

	i = 0;
	while (i < 100)//rhs.ideas->length())
	{
		ideas[i] = rhs.ideas[i];
		i++;
	}
	return (*this);
}

Brain::Brain(const Brain &src)
{
	std::cout << "Brain copy constructor" << std::endl;
	*this = src;
}

Brain::~Brain()
{
	std::cout << "Brain destructor" << std::endl;
}

void	Brain::setIdea()
{
	int	i;

	i = 0;
	while (i < ideas->length())
	{
		ideas[i] = ideas[i - 1] + "I";
		i++;
	}
}

std::string	Brain::generateIdea()
{
	int	k;

	k = std::rand() % 100;
	return (ideas[k]);//std::rand() % 100]);
}
