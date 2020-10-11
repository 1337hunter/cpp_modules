/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 20:50:21 by gbright           #+#    #+#             */
/*   Updated: 2020/09/25 12:45:11 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name)
{
	_name = name;
	_boxCount = 0;
	_box = new AMateria*[4];
}

Character::Character(const Character &obj)
{
	*this = obj;
}

Character::~Character(void)
{
	int	i = -1;
	while (++i < _boxCount)
		delete _box[i];
	delete[] _box;
}

std::string const	&Character::getName(void) const
{
	return _name;
}

void	Character::equip(AMateria *m)
{
	if (_boxCount >= 4 || !m)
		return ;
	_boxCount++;
	_box[_boxCount - 1] = m;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= _boxCount)
		return ;
	while (++idx < _boxCount)
		_box[idx - 1] = _box[idx];
	_box[idx - 1] = 0;
	_boxCount--;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= _boxCount)
		return ;
	_box[idx]->use(target);
}

void	Character::operator=(const Character &obj)
{
	if (obj._boxCount > 0)
		this->~Character();
	this->_box = new AMateria*[4];
	this->_name = obj.getName();
	this->_boxCount = obj._boxCount;
	int	i = -1;
	while (++i < this->_boxCount)
		this->_box[i] = obj._box[i]->clone();
}
