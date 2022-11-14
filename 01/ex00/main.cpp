/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:28:54 by mmicheli          #+#    #+#             */
/*   Updated: 2022/11/07 15:28:54 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void) {
	Zombie kartman("Kartmann");
	kartman.announce();
	std::cout << std::endl;

	Zombie *stan;
	stan = newZombie("Stan");
	stan->announce();
	delete stan;
	std::cout << std::endl;

	randomChump("Kenny");
	std::cout << std::endl;

	return (0);
}