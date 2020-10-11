/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 21:28:39 by gbright           #+#    #+#             */
/*   Updated: 2020/09/11 10:41:41 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>

class	contact
{
	private:
		std::string	fname;
		std::string	lname;
		std::string	nickname;
		std::string	login;
		std::string	postal_address;
		std::string	email;
		std::string	phone;
		std::string	birthday;
		std::string	favorite_meal;
		std::string	underwear_color;
		std::string	darkest_secret;
	public:
		void	create(void);
		void	print_contact(int index);
		void	print_per_line(void);
};

#endif
