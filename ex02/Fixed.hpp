/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:20:33 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/14 17:26:35 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	// ---------- ex00 ----------
	private:
		int					_rawBits;
		static int const	_f = 8;

	public:
		Fixed();
		Fixed(Fixed const& src);
		~Fixed();

		Fixed&	operator=(Fixed const& rhs);
		int		getRawBits() const;
		void	setRawBits(int const raw);

	// ---------- ex01 ----------
		Fixed(int const n);
		Fixed(float const n);
		float	toFloat() const;
		int		toInt() const;

	// ---------- ex02 ----------
		bool				operator>(Fixed const& rhs) const;
		bool				operator<(Fixed const& rhs) const;
		bool				operator>=(Fixed const& rhs) const;
		bool				operator<=(Fixed const& rhs) const;
		bool				operator==(Fixed const& rhs) const;
		bool				operator!=(Fixed const& rhs) const;

		Fixed				operator+(Fixed const& rhs);
		Fixed				operator-(Fixed const& rhs);
		Fixed				operator*(Fixed const& rhs);
		Fixed				operator/(Fixed const& rhs);

		Fixed&				operator++();
		Fixed				operator++(int);
		Fixed&				operator--();
		Fixed				operator--(int);

		static Fixed&		min(Fixed& n, Fixed& m);
		static Fixed const&	min(Fixed const& n, Fixed const& m);
		static Fixed&		max(Fixed& n, Fixed& m);
		static Fixed const&	max(Fixed const& n, Fixed const& m);
};

std::ostream&	operator<<(std::ostream& o, Fixed const& rhs);

#endif