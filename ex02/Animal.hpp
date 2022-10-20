/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 23:10:31 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/20 11:09:12 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
protected:
	std::string	type;
public:
	Animal();
	Animal & operator=(const Animal &rhs);
	Animal(const Animal & src);
	virtual ~Animal();
	
	Animal(std::string enterType);
	virtual void		makeSound() const = 0;
	const std::string	&getType() const;
};



#endif