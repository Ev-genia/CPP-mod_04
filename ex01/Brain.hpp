/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:59:29 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/20 10:56:12 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "iostream"

class Brain
{
private:
	std::string	ideas[100];
	void	setIdea();
public:
	Brain();
	Brain	&operator=(const Brain &rhs);
	Brain(const Brain &src);
	virtual ~Brain();

	std::string	generateIdea();
};

#endif