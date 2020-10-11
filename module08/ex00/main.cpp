#include "easyfind.hpp"
#include <list>
#include <vector>
#include <iostream>

int	main(void)
{
	std::vector<int>        wait;
	std::list<int>		what;
	
	what.push_back(1);
	what.push_back(2);
	what.push_back(3);

	wait.push_back(111);
	wait.push_back(222);
	wait.push_back(333);

	std::cout << easyfind<std::list<int> >(what, 2) << std::endl;
	try
	{
		std::cout << easyfind<std::list<int> >(what, 4) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << easyfind<std::vector<int> >(wait, 222) << std::endl;
	try
        {
                std::cout << easyfind<std::vector<int> >(wait, 11) << std::endl;
        }
        catch (std::exception &e)
        {
                std::cout << e.what() << std::endl;
        }

}
