/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:37:48 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/15 17:22:45 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// area of a triangle: abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0)

float	area(const Point p1, const Point p2, const Point p3) 
{
	float	ret = ( p1.getX().toFloat() * (p2.getY().toFloat() - p3.getY().toFloat())
					+ p2.getX().toFloat() * (p3.getY().toFloat() - p1.getY().toFloat())
					+ p3.getX().toFloat() * (p1.getY().toFloat() - p2.getY().toFloat()) ) / 2.0;

	if (ret < 0.0)
		return (-ret);

	return (ret);
}

bool	bsp(const Point a, const Point b, const Point c, const Point point)
{
	float abc = area(a, b, c);
	float abp = area(a, b, point);
	float acp = area(a, c, point);
	float bcp = area(b, c, point);

	if (!abp || !acp || !bcp)
		return (false);

	return (abc == abp + acp + bcp);
}
