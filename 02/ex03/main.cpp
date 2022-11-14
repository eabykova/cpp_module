/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:45:32 by mmicheli          #+#    #+#             */
/*   Updated: 2022/11/09 18:45:32 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main (void) {

	Point a, b(0, 10), c(10.0, 0.0), d;
	d.setX(10);
	d.setY(10);

	if (bsp(a, b, c, d))
		std::cout<< "Point"<< d<< " belongs to the triangle"<< a<< b<< c<< std::endl;
	else
		std::cout<< "Point"<< d<< " outside the triangle"<< a<< b<< c<< std::endl;
	d.setX(2);
	d.setY(2);

	if (bsp(a, b, c, d))
		std::cout<< "Point"<< d<< " belongs to the triangle"<< a<< b<< c<< std::endl;
	else
		std::cout<< "Point"<< d<< " outside the triangle"<< a<< b<< c<< std::endl;

	return 0;
    return 0;
}