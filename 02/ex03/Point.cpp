/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:14:00 by mmicheli          #+#    #+#             */
/*   Updated: 2022/11/14 18:14:00 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(const float &x, const float &y) : _x(x), _y(y) {}

Point::Point(const Point &copy) {
	*this = copy;
}

Point::~Point() {}

const Point &Point::operator= (const Point &point) {
	if (this == &point) {
		return *this;
	}
	_x = point.getX();
	_y = point.getY();
	return *this;
}

const Fixed Point::getX() const {
	return _x;
}

const Fixed Point::getY() const {
	return _y;
}

void Point::setX(const Fixed &xVal) {
	this->_x = xVal;
}

void Point::setY(const Fixed &yVal) {
	this->_y = yVal;
}

std::ostream& operator<< (std::ostream &ostr, const Point &point) {
	ostr << "(" << point.getX() << ", " << point.getY() << ")";
	return ostr;
}