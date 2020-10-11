#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <exception>
# include <algorithm>
//using itype = decltype(what.begin());
//auto
//IS c++11

template <class T>
int &easyfind(T what, int i)
{
	typename T::iterator start = 	what.begin();
	typename T::iterator end = 	what.end();
	typename T::iterator ret =	find(start, end, i);
	if (ret != end)
	       return *ret;
	else
		throw std::exception();
	return *ret;
}

#endif
