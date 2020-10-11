/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 10:16:23 by gbright           #+#    #+#             */
/*   Updated: 2020/10/04 19:02:53 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <iostream>
#include <list>

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	mstack.pop();
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(777);
	mstack.push(127);
	mstack.push(21);
	mstack.push(42);
	mstack.push(1);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "\n------------iterating MutantStack-------------\n";
	while (it != ite)
	{
		std::cout << *it << "\titer" <<  std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << "\n---------test the same thing with list---------\n";
	std::list<int>	dlist;
	dlist.push_back(5);
        dlist.push_back(3);
        dlist.push_back(5);
        dlist.push_back(737);
	dlist.push_back(777);
        dlist.push_back(127);
        dlist.push_back(21);
        dlist.push_back(42);
        dlist.push_back(1);
	std::list<int>::iterator lit = dlist.begin();
	std::list<int>::iterator lite = dlist.end();
        ++lit;
        --lit;
        while (lit != lite)
        {
                std::cout << *lit << "\titer list" <<  std::endl;
                ++lit;
        }
}
