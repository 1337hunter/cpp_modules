/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 19:39:25 by gbright           #+#    #+#             */
/*   Updated: 2020/09/21 23:34:06 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void): Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *\n";
}

RadScorpion	&RadScorpion::operator=(const RadScorpion &obj)
{
	this->hp = obj.hp;
	this->type = obj.type;
	return *this;
}

RadScorpion::RadScorpion(const RadScorpion &obj)
{
	*this = obj;
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *\n";
}
