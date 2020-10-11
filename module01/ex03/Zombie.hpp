/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 09:00:58 by gbright           #+#    #+#             */
/*   Updated: 2020/09/11 12:03:07 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
		std::string	type;
		std::string	name;

	public:
				Zombie(std::string str);
				Zombie(void);
		void		set_type(std::string str);
		void		set_name(std::string str);
		void		announce(void);
};
#endif
