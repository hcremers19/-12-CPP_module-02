/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:36:32 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/14 14:22:49 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// ----------------------------------- ex00 -----------------------------------

Fixed::Fixed() : _rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;

	return;
}

Fixed::Fixed(Fixed const& src)
{
	std::cout << "Copy constructor called" << std::endl;

	*this = src;

	return;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;

	return;
}

Fixed&	Fixed::operator=(Fixed const& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;

	this->_rawBits = rhs.getRawBits();

	return (*this);
}

int		Fixed::getRawBits() const
{
	// std::cout << "getRawBits member function called" << std::endl;

	return (this->_rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;

	return;
}

// ----------------------------------- ex01 -----------------------------------

Fixed::Fixed(int const n) : _rawBits(n * 256)
{
	std::cout << "Int constructor called" << std::endl;

	return;
}

Fixed::Fixed(float const n) : _rawBits(int(roundf(n * 256)))
{
	std::cout << "Float constructor called" << std::endl;

	return;
}

float	Fixed::toFloat() const
{
	return (_rawBits / 256.0);
}

int		Fixed::toInt() const
{
	return (_rawBits / 256);
}

std::ostream&	operator<<(std::ostream& o, Fixed const& rhs)
{
	o << rhs.toFloat();

	return (o);
}
