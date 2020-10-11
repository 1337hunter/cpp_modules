/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 20:20:26 by gbright           #+#    #+#             */
/*   Updated: 2020/09/26 20:38:43 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void	swap(T &a, T &b)
{
	T	t;
	t = a;
	a = b;
	b = t;
}

template <typename T>
T	min(T a, T b)
{
	return a < b ? a : b;
}

template <typename T>
T	max(T a, T b)
{
	return a > b ? a : b;
}

int	main(void)
{
	int	a = 0;
	int	b = 1;
	double	aa = 2.1;
	double	bb = 4.2;

	std::cout << "a = " << a << " b = " << b << std::endl;
	::swap(a, b);
	std::cout << "a = " << a << " b = " << b << std::endl;
	::swap(aa, bb);
	std::cout << "a = " << a << " b = " << b << std::endl;
	std::cout << "\n-----------min max--------------\n\n";
	std::cout << "min( a, b ) = " << ::min(a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b ) << std::endl;
	std::cout << "min(aa, bb) = " << ::min(aa, bb) << std::endl;
	std::cout << "max(aa, bb) = " << ::max(aa, bb) << std::endl;

	std::cout << "\n-----------play with strings-----\n\n";
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
	std::cout << "max(c, d) = " << ::max(c, d) << std::endl;
}
