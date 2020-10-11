/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 23:21:32 by gbright           #+#    #+#             */
/*   Updated: 2020/09/28 22:02:13 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.h"

int	main(void)
{
	Array<char>	arr(10);
	Array<int>	iarr(10);
	Array<double>	empty;

	std::cout << "empty.size(): " << empty.size() << '\n';
	try
	{
		empty[0] = 0;
	}
	catch (std::exception &e)
	{
		std::cout << "empty error\n";
	}
	std::cout << "arr.size(): " << arr.size() << '\n';
	std::cout << "arr[2]: " << static_cast<int>(arr[2]) << '\n';
	arr[2] = 'A';
	iarr[0] = 100500;
	iarr[1] = 1;
	std::cout << "arr[2]: " << arr[2] << '\n';
	try
	{
		arr[20] = 'a';
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << iarr[0] << '\n';
	std::cout << iarr[1] << '\n';
	std::cout << iarr[2] << iarr[3] << iarr[4] << iarr[5] << " << default values" <<'\n';
	try
	{
		iarr[21] = 21;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}
	try
        {
                iarr[1] = 1;
		std::cout << "Done!\n";
        }
        catch (std::exception &e)
        {
                std::cout << e.what() << '\n';
	}
	std::cout << "--------------copy constractor and operator= test-----------\n";
	Array<char>	copy(arr);
	std::cout << "copy[2]: " << copy[2] << '\n';
	arr[1] = 'Z';
	arr[2] = 'Z';
	arr[3] = 'Z';
	copy = arr;
	std::cout << copy[1] << copy[2] << copy[3] << std::endl;
}
