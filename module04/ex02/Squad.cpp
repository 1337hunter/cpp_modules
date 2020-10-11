/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 10:40:04 by gbright           #+#    #+#             */
/*   Updated: 2020/09/25 11:17:07 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void): counter(0), unit(0) {}

Squad::~Squad(void)
{
	int	i = -1;
	while (++i < counter)
		delete unit[i];
	delete[] unit;
}

Squad::Squad(const ISquad &what)
{
	if (what.getCount() == 0)
	{
		counter = 0;
		unit = 0;
		return ;
	}

	int     i = -1;
	counter  = what.getCount();
	unit = new ISpaceMarine*[counter];

	while (++i < counter)
		unit[i] = what.getUnit(i)->clone();
}

int	Squad::getCount(void) const
{
	return counter;
}

ISpaceMarine	*Squad::getUnit(int n) const
{
	if (counter == 0)
		return 0;
	if (n < 0 || n > counter - 1)
		return 0;
	return unit[n];
}

int	Squad::push(ISpaceMarine *one)
{
	if (one != 0)
	{
		ISpaceMarine	**temp = new ISpaceMarine*[counter + 1];
		int     i = -1;
		while (++i < counter)
		{
			if (one == unit[i])
			{
				delete[] temp;
				return counter;
			}
			temp[i] = unit[i];
		}
		temp[i] = one;
		if (unit)
			delete[] unit;
		unit = temp;
		counter++;
	}
	return counter;
}

void	Squad::operator=(const Squad &obj)
{
	if (this->counter > 0)
		this->~Squad();
	this->counter = obj.getCount();
	unit = new ISpaceMarine*[this->counter];
	int	i = -1;
	while (++i < this->counter)
		unit[i] = obj.getUnit(i)->clone();
}
