/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 22:38:22 by gbright           #+#    #+#             */
/*   Updated: 2020/09/28 21:59:22 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_H
# define ARRAY_H

# include <iostream>

template <typename T>
class	Array
{
	private:
		T	*_arr;
		size_t	_size;
	public:
		Array(void)
		{
			_size = 0;
			_arr = 0;
		}
		Array(unsigned int n)
		{
			size_t	i;

			_arr = new T[n];
			_size = n;
			i = -1;
			while (++i < n)
				_arr[i] = T();

		}
		Array(const Array &what)
		{
			size_t	i;

			_size = what._size;
			_arr = new T[_size];
			i = -1;
			while (++i < _size)
				_arr[i] = what._arr[i];
		}
		~Array(void)
		{
			delete[] _arr;
		}
	Array	&operator=(const Array &what)
	{
		size_t	i;

		if (_arr)
			delete[] _arr;
		_size = what._size;
		_arr = new T[_size];
		i = -1;
		while (++i < _size)
			_arr[i] = what._arr[i];
		return *this;
	}
	T	&operator[](size_t n)
	{
			if (n >= _size)
				throw std::exception();
			return _arr[n];
	}
	size_t	size(void)
	{
		return _size;
	}

};

#endif
