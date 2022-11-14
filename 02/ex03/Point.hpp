/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:01:23 by mmicheli          #+#    #+#             */
/*   Updated: 2022/11/14 18:01:23 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

# include "Fixed.hpp"

class Point {
private:
	Fixed _x;
	Fixed _y;

public:
	Point();
	Point(const float &x, const float &y);
	Point(const Point& copy);
	~Point();

	const	Point& operator= (const Point &point);
	const	Fixed getX(void) const;
	const	Fixed getY(void) const;
	void	setX(const Fixed& xVal);
	void	setY(const Fixed& yVal);
};

std::ostream& operator<< (std::ostream &ostr, const Point &point);
bool bsp(Point const a, Point const b, Point const c, Point const point);
#endif