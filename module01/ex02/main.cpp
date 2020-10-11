/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 09:21:34 by gbright           #+#    #+#             */
/*   Updated: 2020/09/11 11:22:11 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iostream>
#include "ZombieEvent.hpp"
#include "Zombie.hpp"

char    consonants[] = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','z'};
char    vowels[] = {'a','e','i','o','u','y'};

void	randomChump(void)
{
	ZombieEvent	event;
	std::string	name;
	Zombie		*one;
	int		len;

	len = 4 + rand() % 7;
	name = "";
	name += std::toupper(consonants[rand() % 19]);
	for (int i = 0; i < len; i++)
	{
		if (rand() % 2)
			name += consonants[rand() % 19];
		else
			name += vowels[rand() % 6];
	}
	one = event.newZombie(name);
	event.setZombieType("Very big and stupid");
	one->announce();
	delete one;
}

int	main(void)
{
	srand(time(0) + 69);
	randomChump();
	randomChump();
	randomChump();
	randomChump();
	randomChump();
	randomChump();
	randomChump();
	randomChump();
}

