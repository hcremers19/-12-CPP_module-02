/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:36:32 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/14 18:39:47 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// ----------------------------------- ex00 -----------------------------------

Fixed::Fixed() : _rawBits(0)
{
	// std::cout << "--Default constructor called--" << std::endl;

	return;
}

Fixed::Fixed(Fixed const& src)
{
	// std::cout << "--Copy constructor called--" << std::endl;

	*this = src;

	return;
}

Fixed::~Fixed()
{
	// std::cout << "--Destructor called--" << std::endl;

	return;
}

Fixed&			Fixed::operator=(Fixed const& rhs)
{
	// std::cout << "--Copy assignment operator called--" << std::endl;

	this->_rawBits = rhs.getRawBits();

	return (*this);
}

int				Fixed::getRawBits() const
{
	// std::cout << "--getRawBits member function called--" << std::endl;

	return (this->_rawBits);
}

void			Fixed::setRawBits(int const raw)
{
	// std::cout << "--setRawBits member function called--" << std::endl;

	this->_rawBits = raw;
	
	return;
}

// ----------------------------------- ex01 -----------------------------------

Fixed::Fixed(int const n) : _rawBits(n * 256)
{
	// std::cout << "--Int constructor called--" << std::endl;

	return;
}

Fixed::Fixed(float const n) : _rawBits(int(roundf(n * 256)))
{
	// std::cout << "--Float constructor called--" << std::endl;

	return;
}

float			Fixed::toFloat() const
{
	// std::cout << "--toFloat member function called--" << std::endl;

	return (this->_rawBits / 256.0);
}

int				Fixed::toInt() const
{
	// std::cout << "--toInt member function called--" << std::endl;

	return (this->_rawBits / 256);
}

std::ostream&	operator<<(std::ostream& o, Fixed const& rhs)
{
	// std::cout << "--Insertion operator called--" << std::endl;

	o << rhs.toFloat();

	return (o);
}

// ----------------------------------- ex02 -----------------------------------

bool			Fixed::operator>(Fixed const& rhs) const
{
	// std::cout << "--Greater than operator called--" << std::endl;

	return (this->_rawBits > rhs._rawBits);
}

bool			Fixed::operator<(Fixed const& rhs) const
{
	// std::cout << "--Less than operator called--" << std::endl;

	return (this->_rawBits < rhs._rawBits);
}

bool			Fixed::operator>=(Fixed const& rhs) const
{
	// std::cout << "--Greater than or equal to operator called--" << std::endl;

	return (this->_rawBits >= rhs._rawBits);
}

bool			Fixed::operator<=(Fixed const& rhs) const
{
	// std::cout << "--Less than or equal to operator called--" << std::endl;

	return (this->_rawBits <= rhs._rawBits);
}

bool			Fixed::operator==(Fixed const& rhs) const
{
	// std::cout << "--Equal to operator called--" << std::endl;

	return (this->_rawBits == rhs._rawBits);
}

bool			Fixed::operator!=(Fixed const& rhs) const
{
	// std::cout << "--Not equal to operator called--" << std::endl;

	return (this->_rawBits != rhs._rawBits);
}


Fixed			Fixed::operator+(Fixed const& rhs)
{
	// std::cout << "--Addition operator called--" << std::endl;

	Fixed	n;

	n.setRawBits(this->_rawBits + rhs._rawBits);

	return (n);
}

Fixed			Fixed::operator-(Fixed const& rhs)
{
	// std::cout << "--Substraction operator called--" << std::endl;

	Fixed	n;

	n.setRawBits(this->_rawBits - rhs._rawBits);

	return (n);
}

Fixed			Fixed::operator*(Fixed const& rhs)
{
	// std::cout << "--Multiplication operator called--" << std::endl;

	Fixed	n;

	n.setRawBits(this->_rawBits * (rhs._rawBits / 256));

	return (n);
}

Fixed			Fixed::operator/(Fixed const& rhs)
{
	// std::cout << "--Division operator called--" << std::endl;

	Fixed	n;

	n.setRawBits(this->_rawBits / (rhs._rawBits / 256));

	return (n);
}


Fixed&			Fixed::operator++()
{
	// std::cout << "--Pre-increment operator called--" << std::endl;

	this->_rawBits++;

	return(*this);
}

Fixed			Fixed::operator++(int)
{
	// std::cout << "--Post-increment operator called--" << std::endl;

	Fixed copy = *this;

	++*this;

	return(copy);
}

Fixed&			Fixed::operator--()
{
	// std::cout << "--Pre-decrement operator called--" << std::endl;

	this->_rawBits--;

	return(*this);
}

Fixed			Fixed::operator--(int)
{
	// std::cout << "--Post-decrement operator called--" << std::endl;

	Fixed copy = *this;

	--*this;

	return(copy);
}

Fixed&			Fixed::min(Fixed& n, Fixed& m)
{
	// std::cout << "--min member function called--" << std::endl;

	if (n < m)
		return (n);

	return (m);
}

Fixed const&	Fixed::min(Fixed const& n, Fixed const& m)
{
	// std::cout << "--const min member function called--" << std::endl;

	if (n < m)
		return (n);

	return (m);
}

Fixed&			Fixed::max(Fixed& n, Fixed& m)
{
	// std::cout << "--max member function called--" << std::endl;

	if (n > m)
		return (n);

	return (m);
}

Fixed const&	Fixed::max(Fixed const& n, Fixed const& m)
{
	// std::cout << "--const max member function called--" << std::endl;

	if (n > m)
		return (n);

	return (m);
}
