/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:48:23 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/20 11:12:45 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
private:
	Brain	*brain;
public:
	Cat();
	Cat &operator=(const Cat & rhs);
	Cat(const Cat & src);
	virtual ~Cat();

	void	makeSound() const;
	std::string		getBrain() const;
};

#endif