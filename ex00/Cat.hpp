/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:48:23 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/18 11:59:34 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal
{
public:
	Cat();
	Cat &operator=(const Cat & src);
	Cat(const Cat & rhs);
	virtual ~Cat();

	virtual void	makeSound() const;
};



#endif