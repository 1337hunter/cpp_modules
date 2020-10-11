/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 17:34:45 by gbright           #+#    #+#             */
/*   Updated: 2020/09/08 17:34:50 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 0;
		while (++i < ac)
		{
			j = -1;
			while (av[i][++j])
				av[i][j] = std::toupper(av[i][j]);
			std::cout << av[i];
		}
		std::cout << std::endl;;
	}
	return (0);
}
