/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 19:26:31 by gbright           #+#    #+#             */
/*   Updated: 2020/09/27 15:46:48 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>

class	Convert
{
	private:
		std::string	_str;
	public:
			Convert(void);
			Convert(std::string);
			Convert(const Convert &);
			~Convert(void);
		Convert	&operator=(const Convert &);
		void	printChar(std::ostream &) const;
		void	printInt(std::ostream &) const;
		void	printFloat(std::ostream &) const;
		void	printDouble(std::ostream &) const;
};

std::ostream	&operator<<(std::ostream &os, const Convert &what);

#endif
