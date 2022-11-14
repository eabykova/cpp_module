/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:34:19 by mmicheli          #+#    #+#             */
/*   Updated: 2022/11/07 16:34:19 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	std::string personal_name;
	if (N > 0) {
		Zombie *Horde = new (std::nothrow)Zombie[N];
		if (Horde) {
			for (int i = 0; i < N; i++)
			{
				personal_name = name + std::to_string(i);
				Horde[i].setName(personal_name);
			}
		} else {
			std::cout << "Memory error. Stop." << std::endl;
		}
		return (Horde);
	}
	return NULL;
}