/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 13:42:42 by gbright           #+#    #+#             */
/*   Updated: 2020/09/25 11:02:44 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int h, std::string const &what): hp(h), type(what) {}

Enemy::~Enemy(void) {}

Enemy::Enemy(void) {}

Enemy::Enemy(const Enemy &obj)
{
	this->hp = obj.getHP();
	this->type = obj.getType();
}

int	Enemy::getHP(void) const
{
	return hp;
}

void	Enemy::takeDamage(int dmg)
{
	if (dmg > 0)
		hp = hp - dmg > 0 ? hp - dmg : 0;
}

std::string const	&Enemy::getType(void) const
{
	return type;
}

void	Enemy::operator=(const Enemy &obj)
{
	this->hp = obj.getHP();
	this->type = obj.getType();
}
