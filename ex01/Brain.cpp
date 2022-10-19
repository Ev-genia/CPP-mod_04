/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:59:19 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/19 11:57:45 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain defoult constructor" << std::endl;
	int	i;

	i = 0;
	while (i < 100)//ideas->length())
	{
		ideas[i] = "no idea";
		i++;
	}
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
	while (i < 100)//ideas->length())
	{
		ideas[i] = ideas[i] + "I";
		i++;
	}
}

std::string	Brain::generateIdea()
{
	return (ideas[std::rand() % 100]);
}
