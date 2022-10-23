/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:03:46 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/23 14:57:42 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE
# define MATERIASOURCE

# include "IMateriaSource.hpp"

// Напишите конкретный класс MateriaSource, который будет реализовывать следующий интерфейс:

// • LearnMateria(AMateria*) Копирует Материю, переданную в качестве параметра, 
// и сохраняет ее в памяти, чтобы ее можно было клонировать позже. Как и Персонаж, 
// Источник Материи может знать не более 4 Материй. Они не обязательно уникальны.
// • createMateria(std::string const &) Возвращает новую Материю. 
// Последний является копией Материи, ранее изученной Материей-Источником, 
// тип которой равен типу, переданному в качестве параметра. 
// Возвращает 0, если тип неизвестен.

// В двух словах, ваш MateriaSource должен уметь изучать «шаблоны» Материй, 
// чтобы создавать их по мере необходимости. Затем вы сможете сгенерировать новую Материю, 
// используя только строку, идентифицирующую ее тип.

class MateriaSource: public IMateriaSource
{
private:
	AMateria	*types[4];
public:
	MateriaSource();
	MateriaSource	&operator=(const MateriaSource &);
	MateriaSource(const MateriaSource &);
	virtual ~MateriaSource();

	void		learnMateria(AMateria*);
	AMateria*	createMateria(std::string type);
};



#endif