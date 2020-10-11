#include "span.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <array>

int	main(void)
{
	span	what(5);

	srand(time(0) + 69);
	std::cout << "----------Subject test --------------\n\n";
	what.addNumber(5);
	what.addNumber(3);
	what.addNumber(17);
	what.addNumber(9);
	what.addNumber(11);
	std::cout << what.shortestSpan() << std::endl;
	std::cout << what.longestSpan() << std::endl;

	std::cout << "\n----------My Big Test---------------\n\n";
	span			wait(10000);
	std::array<int, 10000>	arr;
	std::array<int, 10000>::iterator start = arr.begin();
	std::array<int, 10000>::iterator end = arr.end();
	while (start != end)
	{
		*start = 5000 - (rand() % 10001);
		start++;
	}
	start = arr.begin();
	wait.addNumber(start, end);
	std::cout << wait.shortestSpan() << std::endl;
	std::cout << wait.longestSpan() << std::endl;
}
