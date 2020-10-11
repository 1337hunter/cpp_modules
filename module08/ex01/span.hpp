#ifndef SPAN_HPP
# define SPAN_HPP

# include <exception>
# include <ctime>
# include <set>

class span
{
		std::size_t		_maxSize;
		std::multiset<int>	_mset;
	public:
			span(void);
			~span(void);
			span(const span &);
		span	&operator=(const span &);
			span(std::size_t);
		void	addNumber(int);
		template <typename I> void addNumber(I begin, I end);
		std::size_t	maxSize(void) const;
		std::size_t	size(void) const;
		int		shortestSpan(void);
		int		longestSpan(void);
};

# include "span.ipp"

#endif
