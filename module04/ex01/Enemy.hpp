/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 13:42:42 by gbright           #+#    #+#             */
/*   Updated: 2020/09/21 23:30:33 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <string>
# include <iostream>

class Enemy
{
	protected:
		int			hp;
		std::string		type;
	public:
					Enemy(int hp, std::string const &type);
					Enemy(const Enemy &obj);
					Enemy(void);
		virtual			~Enemy(void);
		int 			getHP(void) const;
		virtual void		takeDamage(int);
		std::string const	&getType(void) const;
		void			operator=(const Enemy &obj);
};

#endif
