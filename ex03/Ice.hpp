/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:46:13 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/23 15:23:10 by mlarra           ###   ########.fr       */
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

	virtual Ice	*clone() const;
	void		use(ICharacter& target);
};



#endif