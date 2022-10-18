/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:48:06 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/18 11:34:42 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal
{
public:
	Dog();
	Dog &operator=(const Dog & src);
	Dog(const Dog &rhs);
	virtual ~Dog();

	virtual void	makeSound() const;
};


#endif