/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:37:17 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/23 18:41:44 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

// Напишите конкретный класс Character, который будет реализовывать следующий интерфейс:

// В инвентаре Персонажа 4 слота, что означает максимум 4 Материи. 
// Инвентарь пуст при строительстве. Они экипируют Материи в первый свободный слот, 
// который они найдут. То есть в таком порядке: от слота 0 до слота 3. 
// В случае, если они попытаются добавить Материю в полный инвентарь, 
// или использовать/снять несуществующую Материю, ничего не делать 
// (но тем не менее, баги запрещены). 
// Функция-член unequip() НЕ ДОЛЖНА удалять Материю!

// Распоряжайтесь Материями, оставленными вашим персонажем на полу, как вам угодно. 
// Сохраняйте адреса перед вызовом unequip() или чего-то еще, но не забывайте, 
// что вы должны избегать утечек памяти.

// Функция-член use(int, ICharacter&) должна будет использовать Материю в слоте [idx] 
// и передать целевой параметр функции AMateria::use.

class Character: public ICharacter
{
private:
	std::string	name;
	AMateria	*materiaInventary[4];
	void		fillNullInventary();
public:
	Character();
	Character	&operator=(const Character &);
	Character(const Character &);
	virtual ~Character();

	Character(std::string enterName);
	std::string const	&getName() const;
	void				equip(AMateria* m);
	void				unequip(int idx);
	void				use(int idx, ICharacter& target);
};

#endif