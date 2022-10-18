/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ishak.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:26:00 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/18 12:33:41 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISHAK_HPP
# define ISHAK_HPP

# include "Animal.hpp"

class Ishak: public Animal
{
public:
	Ishak();
	Ishak &operator=(const Ishak &rhs);
	Ishak(const Ishak &src);
	virtual ~Ishak();

	virtual void	makeSound() const;
};

#endif