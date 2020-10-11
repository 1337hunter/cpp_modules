/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 12:17:24 by gbright           #+#    #+#             */
/*   Updated: 2020/09/26 15:33:31 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Header.hpp"
#include <iostream>

int	main(void)
{
	void		*what;
	struct Data	*out;

	what = serialize();
	out = deserialize(what);
	std::cout << "-----------test main----------" << std::endl;
	std::cout << "s1:\t" << out->s1 << std::endl;
	std::cout << "n:\t" << out->n << std::endl;
	std::cout << "s2:\t" << out->s2 << '\n';

	delete static_cast<char*>(what);
	delete out;
}
