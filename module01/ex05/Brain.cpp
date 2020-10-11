/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 13:06:45 by gbright           #+#    #+#             */
/*   Updated: 2020/09/11 17:53:25 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <sstream>

Brain::Brain(void)
{
	value = 0;
	complexity = 0;
	yearsOld = 0;
}

Brain::Brain(int val, int comp, int years)
{
	value = val;
	complexity = comp;
	yearsOld = years;
}

const Brain	*Brain::identify(void) const
{
	return  this;
}
