/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 09:35:47 by gbright           #+#    #+#             */
/*   Updated: 2020/10/04 19:02:27 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		class iterator
		{
			private:
				T	*_ptr;
			public:
						iterator(T *);
				iterator	operator++(void);
				iterator	operator++(int);
				iterator	operator--(void);
				iterator	operator--(int);
				const T&	operator*(void);
				const T*	operator->(void);
				iterator	operator=(T *);
				bool	operator==(const iterator &);
				bool	operator!=(const iterator &);	
		};
		iterator	begin(void);
		iterator	end(void);
};

#include "mutantstack.cpp"

#endif
