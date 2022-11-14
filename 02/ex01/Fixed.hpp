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
    const Fixed& operator= (const Fixed &value);
    int		getRawBits(void) const;
    void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream& operator<< (std::ostream &ostr, const Fixed &val);
#endif