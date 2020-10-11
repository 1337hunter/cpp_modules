#include "span.hpp"

span::span(void) {}

span::span(size_t n): _maxSize(n) {}

span::span(const span &what)
{
	*this = what;
}

span::~span(void) {}

void	span::addNumber(int n)
{
	if (_mset.size() < _maxSize)
		_mset.insert(n);
	else
		throw std::exception();
}

std::size_t	span::maxSize(void) const
{
	return _maxSize;
}

std::size_t	span::size(void) const
{
	return _mset.size();
}

span	&span::operator=(const span &what)
{
	this->_maxSize = what._maxSize;
	this->_mset = what._mset;
	return *this;
}

int	span::shortestSpan(void)
{
	int	ret;

	if (_mset.size() < 2)
		throw std::exception();
	std::multiset<int>::iterator start = _mset.begin();
	ret = *start;
	start++;
	ret = *start - ret;
	return ret;
}

int	span::longestSpan(void)
{
	if (_mset.size() < 2)
		throw std::exception();
	std::multiset<int>::iterator start = _mset.begin();
	std::multiset<int>::iterator end = _mset.end();
	end--;
	return *end - *start;
	
}
