/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 19:30:51 by gbright           #+#    #+#             */
/*   Updated: 2020/09/26 11:32:14 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(std::string str): _str(str) {}

Convert::Convert(const Convert &obj)
{
	this->_str = obj._str;
}

Convert	&Convert::operator=(const Convert &what)
{
	this->_str = what._str;
	return *this;
}

Convert::~Convert(void) {}

void	Convert::printChar(std::ostream &os) const
{
	int	ret;

	try
	{
		ret = stoi(_str);
	}
	catch (std::out_of_range &e)
	{
		os << "char: overflow\n";
		return ;
	}
	catch (std::exception &e)
	{
		os << "char: impossible\n";
		return ;
	}
	if (ret < -128 || ret > 127)
	{
		os << "char: overflow\n";
		return ;
	}
	else if (!std::isprint(ret))
	{
		os << "char: Non displayable\n";
		return ;
	}
	os << "char: '" << static_cast<char>(ret) << "'\n";
}

void	Convert::printInt(std::ostream &os) const
{
	int	ret;

	try
	{
		ret = stoi(_str);
	}
	catch (std::out_of_range &e)
	{
		os << "int: overflow\n";
		return ;
	}
	catch (std::exception &e)
	{
		os << "int: impossible\n";
		return ;
	}
	os << "int: " << static_cast<int>(ret) << "\n";
}

void	Convert::printFloat(std::ostream &os) const
{
	float	ret;

	try
	{
		ret = stof(_str);
	}
	catch (std::out_of_range &e)
	{
		os << "float: overflow\n";
		return ;
	}
	catch (std::exception &e)
	{
		os << "float: impossible\n";
		return ;
	}
	if (static_cast<float>(static_cast<long>(ret)) == ret)
		os << "float: " << static_cast<float>(ret) << ".0f\n";
	else
		os << "float: " << static_cast<float>(ret) << "f\n";
}

void	Convert::printDouble(std::ostream &os) const
{
	double	ret;

	try
	{
		ret = stod(_str);
	}
	catch (std::out_of_range &e)
	{
		os << "double: overflow\n";
		return ;
	}
	catch (std::exception &e)
	{
		os << "double: impossible\n";
		return ;
	}
	if (static_cast<double>(static_cast<long>(ret)) == ret)
                os << "double: " << static_cast<double>(ret) << ".0\n";
	else
                os << "double: " << static_cast<double>(ret) << "\n";
}

std::ostream	&operator<<(std::ostream &os, const Convert &what)
{
	what.printChar(os);
	what.printInt(os);
	what.printFloat(os);
	what.printDouble(os);
	return os;
}
