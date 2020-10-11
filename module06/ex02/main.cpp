/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 18:40:22 by gbright           #+#    #+#             */
/*   Updated: 2020/09/26 19:28:34 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <iostream>

Base	*generate(void)
{
	Base	*ret;

	ret = 0;
	srand(time(0) + 69);
	if (rand() % 2)
	{
		std::cout << "Class A is returning from generate.\n";
		ret = new A;
	}
	else if (rand() % 3)
	{
		std::cout << "Class B is returning from generate.\n";
		ret = new B;
	}
	else if (rand() % 5)
	{
		std::cout << "Class C is returning from generate.\n";
		ret = new C;
	}
	return ret;
}

void	identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p))
	{
		std::cout << "Class A identified from pointer\n";
		return ;
	}
	if (dynamic_cast<B*>(p))
	{
		std::cout << "Class B identified from pointer\n";
		return ;
	}
	if (dynamic_cast<C*>(p))
	{
		std::cout << "Class C identified from pointer\n";
		return ;
	}
}

void    identify_from_reference(Base &p)
{
	try
	{
		A &ref = dynamic_cast<A&>(p);
		std::cout << "Class A identified from reference\n";
		(void)ref;
	}
	catch (std::bad_cast &e)
	{
		try
		{
			B &ref = dynamic_cast<B&>(p);
			std::cout << "Class B identified from reference\n";
			(void)ref;
		}
		catch (std::bad_cast &e)
		{
			try
			{
				C &ref = dynamic_cast<C&>(p);
				std::cout << "Class C identified from reference\n";
				(void)ref;
			}
			catch(std::bad_cast &e)
			{
				std::cout << "What? ERROR!\n";
			}
		}
	}
}
int	main(void)
{
	Base	*what = generate();
	identify_from_pointer(what);
	identify_from_reference(*what);
}
