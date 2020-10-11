/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 08:14:12 by gbright           #+#    #+#             */
/*   Updated: 2020/09/11 08:48:14 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	memoryLeak()
{
	std::string	*panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	delete panther;
}

int	main(void)
{
	memoryLeak();
}
