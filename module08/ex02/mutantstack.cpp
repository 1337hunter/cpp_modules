/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 09:37:01 by gbright           #+#    #+#             */
/*   Updated: 2020/10/04 18:44:32 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


template <typename T>
MutantStack<T>::iterator::iterator(T *ptr): _ptr(ptr) {}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::iterator::operator++(void)
{
	iterator ret = *this;
	_ptr++;
	return ret;
}

template <typename T>
typename MutantStack<T>::iterator        MutantStack<T>::iterator::operator++(int)
{
	_ptr++;
	return *this;
}

template <typename T>
typename MutantStack<T>::iterator        MutantStack<T>::iterator::operator--(void)
{
	iterator ret = *this;
	_ptr--;
	return ret;
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::iterator::operator--(int)
{
	_ptr--;
	return *this;
}

template <typename T>
const T	&MutantStack<T>::iterator::operator*(void)
{
	return *_ptr;
}

template <typename T>
const T	*MutantStack<T>::iterator::operator->(void)
{
	return _ptr;
}

template <typename T>
bool	MutantStack<T>::iterator::operator==(const MutantStack<T>::iterator &what)
{
	return _ptr == what._ptr;
}

template <typename T>
bool    MutantStack<T>::iterator::operator!=(const MutantStack<T>::iterator &what)
{
	return _ptr != what._ptr;
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::iterator::operator=(T *what)
{
	_ptr = what;
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(void)
{
	return iterator(&this->top() - (this->size()) + 1);
}

template <typename T>
typename MutantStack<T>::iterator      MutantStack<T>::end(void)
{
	return iterator(&this->top() + 1);
}
