/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:45:35 by mmicheli          #+#    #+#             */
/*   Updated: 2022/11/09 18:45:35 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
    cout << "Default constructor colling" << endl;
    _value = 0;
}

Fixed::Fixed(const int value) {
	cout << "Integer constructor colling" << endl;
	_value = value * (1 << _doubleBit);
}

Fixed::Fixed(const float value) {
	cout << "Float constructor colling" << endl;
	_value = std::roundf(value * (1 << _doubleBit));
}

Fixed::Fixed(const Fixed &value) {
    cout << "Copy constructor colling" << endl;
    _value = value.getRawBits();
}

Fixed::~Fixed() {
    cout << "Destructor colling" << endl;
}

const Fixed&    Fixed::operator=(const Fixed &value) {
    cout << "Copy assigment operator colling" << endl;
    if (this == &value)
		return *this;
    _value = value.getRawBits();
    return *this;
}

int Fixed::getRawBits() const {
    return _value;
}

void Fixed::setRawBits(const int raw) {
    _value = raw;
}

float Fixed::toFloat(void) const {
	return (float)_value / float(1 << _doubleBit);
}

int Fixed::toInt(void) const {
	return _value / (1 << _doubleBit);
}

std::ostream& operator<< (std::ostream &ostr, const Fixed &val) {
	ostr << val.toFloat();
	return ostr;
}