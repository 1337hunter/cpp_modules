/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 22:48:05 by gbright           #+#    #+#             */
/*   Updated: 2020/09/25 13:03:50 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	_count = 0;
	_box = new AMateria*[4];
}

MateriaSource::~MateriaSource(void)
{
	int	i;

	i = -1;
	while (++i < _count)
		delete _box[i];
	delete[] _box;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &obj)
{
	int	i;

	i = -1;
	while (++i < _count)
		_box[i] = obj._box[i];
	return *this;
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
	*this = obj;
}

void	MateriaSource::learnMateria(AMateria *obj)
{
	if (_count >= 4)
		return ;
	_box[_count] = obj;
	_count++;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	int	i;

	i = _count;
	while (--i >= 0)
		if (_box[i]->getType() == type)
			break ;
	if (i >= 0)
	{
		AMateria *ret;
		if (_box[i]->getType() == "ice")
			ret = new Ice(*_box[i]);
		else
			ret = new Cure(*_box[i]);
		return ret;
	}
	return 0;
}	
