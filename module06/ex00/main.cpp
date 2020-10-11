/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 13:38:19 by gbright           #+#    #+#             */
/*   Updated: 2020/09/26 11:38:44 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <unistd.h>
#include <string>
#include <iostream>

int	main(int ac, char **av)
{
	if (ac != 2)
		return write(1, "Arg error\n", 10);
	Convert	what(av[1]);
	std::cout << what;
}
