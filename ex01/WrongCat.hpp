/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:06:42 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/18 13:10:27 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
public:
	WrongCat();
	WrongCat	&operator=(const WrongCat &rhs);
	WrongCat(const WrongCat &src);
	virtual ~WrongCat();

	WrongCat(std::string enterType);
	void	makeSound();
};

#endif