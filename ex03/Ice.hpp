/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:46:13 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/20 13:39:49 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice: public AMateria
{
public:
	Ice();
	Ice	&operator=(const Ice &);
	Ice(const Ice &);
	virtual ~Ice();

	AMateria*	clone() const;
	void		use(ICharacter& target);
};



#endif