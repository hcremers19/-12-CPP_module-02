/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:20:33 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/14 10:31:31 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>


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
};

#endif