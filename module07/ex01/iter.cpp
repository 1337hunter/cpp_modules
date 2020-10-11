/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 22:14:06 by gbright           #+#    #+#             */
/*   Updated: 2020/09/26 22:29:59 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void	f(T what)
{
	std::cout << what;
}

template <typename T>
void	iter(T *arr, size_t len, void (*f)(T))
{
	size_t	i;

	i = -1;
	while (++i < len)
		f(arr[i]);
}

int	main(void)
{
	char	arr[26];
	int	iarr[26];
	int	i;

	i = -1;
	while (++i <= 26)
	{
		iarr[i] = i;
		arr[i] = 'A' + i;
	}
	iter(iarr, 10, f);
	std::cout << std::endl;
	iter(arr, 26, f);
	std::cout << std::endl;
}
