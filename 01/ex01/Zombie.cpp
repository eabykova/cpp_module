/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:36:12 by mmicheli          #+#    #+#             */
/*   Updated: 2022/11/07 16:36:12 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce() {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(const std::string &zombie_name) {
	_name = zombie_name;
}

Zombie::Zombie(){

}

Zombie::~Zombie() {
	std::cout << "Zombie " << _name << " destroyed with a bang " << std::endl;
}
