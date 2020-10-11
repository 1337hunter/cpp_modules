/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 12:10:48 by gbright           #+#    #+#             */
/*   Updated: 2020/09/11 12:35:00 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <iostream>

int	main(void)
{
	ZombieHorde set(6);
	set.announce();
	std::cout << "More. Mooreee!...\n";
	ZombieHorde set1(9);
	set1.announce();
}
