/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 13:31:12 by gbright           #+#    #+#             */
/*   Updated: 2020/09/11 17:45:31 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <sstream>

const Brain	&Human::getBrain(void)
{
	return brain;
}

const Brain	*Human::identify(void)
{
	return brain.identify();
}
