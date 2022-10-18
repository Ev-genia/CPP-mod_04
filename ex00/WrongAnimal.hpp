/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:44:55 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/18 13:42:43 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
protected:
	std::string	type;
public:
	WrongAnimal();
	WrongAnimal &operator=(const WrongAnimal &rhs);
	WrongAnimal(const WrongAnimal &src);
	virtual ~WrongAnimal();

	WrongAnimal(std::string enterType);
	std::string	getType();
	void	makeSound();
};

#endif