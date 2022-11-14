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
    _value = 0;
}

Fixed::Fixed(const int value) {
	_value = value * (1 << _doubleBit);
}

Fixed::Fixed(const float value) {
	_value = std::roundf(value * (1 << _doubleBit));
}

Fixed::Fixed(const Fixed &value) {
    _value = value.getRawBits();
}

Fixed::~Fixed() {}

const Fixed&    Fixed::operator= (const Fixed &value) {
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

/*---------------------COMPARISON_OPERATORS---------------------*/

bool Fixed::operator> (const Fixed &value) const {
	return this->getRawBits() > value.getRawBits();
}

bool Fixed::operator>= (const Fixed &value) const {
	return this->getRawBits() >= value.getRawBits();
}

bool Fixed::operator< (const Fixed &value) const {
	return this->getRawBits() < value.getRawBits();
}

bool Fixed::operator<= (const Fixed &value) const {
	return this->getRawBits() <= value.getRawBits();
}

bool Fixed::operator== (const Fixed &value) const {
	return this->getRawBits() == value.getRawBits();
}

bool Fixed::operator!= (const Fixed &value) const {
	return this->getRawBits() != value.getRawBits();
}

/*-----------------------INCREMENT_DECREMENT--------------------*/
Fixed &Fixed::operator++(){
	this->_value++;
	return *this;
}

Fixed &Fixed::operator--(){
	this->_value--;
	return *this;
}

Fixed Fixed::operator++ (int n){
	(void)n;
	Fixed tmp(*this);
	++(*this);
	return tmp;
}

Fixed Fixed::operator-- (int n){
	(void)n;
	Fixed tmp(*this);
	--(*this);
	return tmp;
}

/*-------------------------MATH_OPERATORS-----------------------*/

Fixed Fixed::operator+ (const Fixed &value) const {
	return Fixed(this->toFloat() + value.toFloat());
}

Fixed Fixed::operator- (const Fixed &value) const {
	return Fixed(this->toFloat() - value.toFloat());
}

Fixed Fixed::operator*(const Fixed &value) const {
	return Fixed(this->toFloat() * value.toFloat());
}

Fixed Fixed::operator/(const Fixed &value) const {
	return Fixed(this->toFloat() / value.toFloat());
}

/*---------------------------MIN_MAX_FTS------------------------*/

Fixed &Fixed::min(Fixed &val1, Fixed &val2) {
	return (val1 < val2) ? val1 : val2;
}

Fixed &Fixed::max(Fixed &val1, Fixed &val2) {
	return (val1 > val2) ? val1 : val2;
}

const Fixed &Fixed::min(const Fixed &val1, const Fixed &val2) {
	return (val1 < val2) ? val1 : val2;
}

const Fixed &Fixed::max(const Fixed &val1, const Fixed &val2) {
	return (val1 > val2) ? val1 : val2;
}