/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 11:44:45 by gbright           #+#    #+#             */
/*   Updated: 2020/09/26 12:07:45 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
# define HEADER_HPP

# include <string>
# include <ctime>

struct	Data
{
		std::string	s1;
		int		n;
		std::string	s2;
};

void	*serialize(void);
Data	*deserialize(void *raw);

#endif
