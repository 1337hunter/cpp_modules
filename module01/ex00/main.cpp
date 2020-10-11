/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 19:43:26 by gbright           #+#    #+#             */
/*   Updated: 2020/09/10 22:53:42 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

Pony    *ponyOnTheHeap(void)
{
	Pony *one = new Pony();
	std::cout << "Let's look at Pony born on the heap.\n";
	one->describe();
	std::cout << std::endl;
	delete one;
	return (one);
}

Pony    *ponyOnTheStack(void)
{
	Pony	one;

	std::cout << "Let's look at Pony born on the stack.\n";
	one.describe();
	std::cout << std::endl;
	Pony	*ret = &one;
	return (ret);
}

int	main(void)
{
	Pony	*ret = ponyOnTheStack();
	std::cout << "Let's look at Pony after return from ponyOnTheStack:\n";
	ret->describe();
	std::cout << "\n------------------------------------------------------------\n\n";
	Pony	*ret1 = ponyOnTheHeap();
	std::cout << "Let's look at Pony after return from ponyOnTheHeap:\n";
	ret1->describe();
	return (0);
}
