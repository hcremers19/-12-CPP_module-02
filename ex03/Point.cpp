/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:20:06 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/15 16:45:56 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
	return;
}

Point::Point(const int x, const int y) : _x(x), _y(y)
{
	return;
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
	return;
}

Point::Point(const Point& src) : _x(src._x), _y(src._y)
{
	return;
}

Point::~Point()
{
	return;
}

Point&		Point::operator=(Point& rhs)
{
	return (rhs);
}

const Fixed	Point::getX() const
{
	return (_x);
}

const Fixed	Point::getY() const
{
	return (_y);
}
