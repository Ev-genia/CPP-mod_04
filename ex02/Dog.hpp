/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:48:06 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/20 11:17:49 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
private:
	Brain	*brain;
public:
	Dog();
	Dog &operator=(const Dog & rhs);
	Dog(const Dog &src);
	virtual ~Dog();

	void	makeSound() const;
	std::string		getBrain();
};


#endif