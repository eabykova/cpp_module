/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:45:37 by mmicheli          #+#    #+#             */
/*   Updated: 2022/11/09 18:45:37 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

using std::endl;
using std::cout;

class	Fixed {
private:
	int					_value;
	static const int	_doubleBit = 8;

public:
	Fixed(const Fixed &value);
	Fixed(const int value);
	Fixed(const float value);
    Fixed();
	~Fixed();

    const	Fixed& operator= (const Fixed &value);

    int		getRawBits(void) const;
    void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

/*---------------------COMPARISON_OPERATORS---------------------*/
	bool	operator> (const Fixed &value) const;
	bool	operator>= (const Fixed &value) const;
	bool	operator< (const Fixed &value) const;
	bool	operator<= (const Fixed &value) const;
	bool	operator== (const Fixed &value) const;
	bool	operator!= (const Fixed &value) const;

/*-------------------------MATH_OPERATORS-----------------------*/
	Fixed operator+ (const Fixed &value) const;
	Fixed operator- (const Fixed &value) const;
	Fixed operator* (const Fixed &value) const;
	Fixed operator/ (const Fixed &value) const;

/*-----------------------INCREMENT_DECREMENT--------------------*/

	Fixed& operator++ ();
	Fixed& operator-- ();
	Fixed operator++ (int n);
	Fixed operator-- (int n);

	static Fixed& min(Fixed &val1, Fixed &val2);
	static Fixed& max(Fixed &val1, Fixed &val2);
	static const Fixed& min(const Fixed &val1, const Fixed &val2);
	static const Fixed& max(const Fixed &val1, const Fixed &val2);
};

std::ostream& operator<< (std::ostream &ostr, const Fixed &val);
#endif