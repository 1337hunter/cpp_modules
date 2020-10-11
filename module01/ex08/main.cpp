/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 15:32:30 by gbright           #+#    #+#             */
/*   Updated: 2020/09/13 15:40:53 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int	main(void)
{
	Human	bob;

	bob.action("rangedAttack", "batman");
	bob.action("meleeAttack", "spiderman");
	bob.action("intimidatingShout", "superman");
}
