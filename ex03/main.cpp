/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:23:22 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/15 17:19:25 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

void	print_result(bool result)
{
	if (result == true)
		std::cout << "The point is in the triangle." << std::endl;
	else
		std::cout << "The point isn't in the triangle." << std::endl;
}

int main(void)
{
	Point a(1, 1);
	Point b(1, 2);
	Point c(2, 2);
	Point point_one(2, 1);
	Point point_two(2, 2);
	Point point_three(1.3f, 1.5f);

	print_result(bsp(a, b, c, point_one));
	print_result(bsp(a, b, c, point_two));
	print_result(bsp(a, b, c, point_three));

	return (0);
}
