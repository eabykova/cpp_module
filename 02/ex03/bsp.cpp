/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:31:18 by mmicheli          #+#    #+#             */
/*   Updated: 2022/11/14 18:31:18 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	side(const Point &p1, const Point &p2, const Point &point) {
	return (p1.getX() - point.getX()) * (p2.getY() - p1.getY()) - (p2.getX() - p1.getX()) * (p1.getY() - \
			point.getY());
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed sideA(side(a,b, point));
	Fixed sideB(side(b,c, point));
	Fixed sideC(side(c,a, point));

	if ((sideA > Fixed(0) && sideB > Fixed(0) && sideC > Fixed(0)) ||
		(sideA < Fixed(0) && sideB < Fixed(0) && sideC < Fixed(0)))
		return true;
	else if (sideA == Fixed(0) || sideB == Fixed(0) || sideC == Fixed(0))
		return true;
	return false;
}
