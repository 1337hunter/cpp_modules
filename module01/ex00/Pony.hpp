/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 19:33:50 by gbright           #+#    #+#             */
/*   Updated: 2020/09/22 20:05:18 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <string>

class	Pony
{
	private:
		int		legs;
		int		body;
		int		eye;
		int		ear;
		int		tail;
		int		nose;
		int		mouth;
		int		mane;
		char		nickname[21];
	public:
			Pony(void);
			~Pony(void);
		void	describe(void);

};
#endif
