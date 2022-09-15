/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:38:47 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/15 17:02:29 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	public:
		Point();
		Point(const int x, const int y);
		Point(const float x, const float y);
		Point(const Point& src);
		~Point();

		Point&		operator=(Point& rhs);

		const Fixed	getX() const;
		const Fixed	getY() const;

	private:
		const Fixed	_x;
		const Fixed	_y;
};

bool	bsp(const Point a, const Point b, const Point c, const Point point);

#endif