/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 09:25:15 by gbright           #+#    #+#             */
/*   Updated: 2020/09/11 12:29:24 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <string>
#include <ctime>
#include <iostream>

ZombieHorde::ZombieHorde(int N)
{

	int		len;
	std::string	name;
	int		i;
	
	set_of = new Zombie[N];
	Num = N;
	name = "";
	srand(time(0) + 69);
	i = -1;
	while (++i < N)
	{
		len = 4 + rand() % 7;
		name += ('A' + rand() % 26);
		for (int i = 0; i < len; i++)
			name += ('a' + rand() % 26);
		set_of[i].set_name(name);
		set_of[i].set_type("Strong");
		name = "";
	}
}

ZombieHorde::~ZombieHorde(void)
{
	delete[] set_of;
}

int	ZombieHorde::getNum(void)
{
	return (Num);
}

void	ZombieHorde::announce(void)
{
	int	i;
	int	Num;

	i = -1;
	Num = getNum();
	while (++i < Num)
		set_of[i].announce();
}
