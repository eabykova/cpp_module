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
    cout << "getRawBits calling" << endl;
    return _value;
}

void Fixed::setRawBits(const int raw) {
    cout << "setRawBits calling" << endl;
    _value = raw;
}