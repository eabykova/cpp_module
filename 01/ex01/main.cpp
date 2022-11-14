/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:00:11 by mmicheli          #+#    #+#             */
/*   Updated: 2022/11/07 17:00:11 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv) {
	 int count;
	 std::string name;

	if (argc == 1) {
		count = 5;
		name = "Kris";
	} else {
			count = atoi(argv[1]);
			name = argv[2];
	}

	Zombie *Horde = zombieHorde(count, name);
	for (int i = 0; i < count; i++) {
		Horde[i].announce();
	}

	std::cout << std::endl;
	delete [] Horde;
	return (0);
}