/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:47:53 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/20 13:40:01 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria
{
public:
	Cure();
	Cure	&operator=(const Cure &);
	Cure(const Cure &);
	virtual ~Cure();

	AMateria*	clone() const;
	void		use(ICharacter& target);
};



#endif