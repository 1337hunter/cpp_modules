/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 09:25:15 by gbright           #+#    #+#             */
/*   Updated: 2020/09/11 10:51:12 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <string>

Zombie	*ZombieEvent::newZombie(std::string name)
{
	one = new Zombie(name);
	return one;
}

void	ZombieEvent::setZombieType(std::string type)
{
	one->set_type(type);
}
