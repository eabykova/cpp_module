/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:48:28 by mmicheli          #+#    #+#             */
/*   Updated: 2022/11/09 11:48:28 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) {
	this->_name = name;
	this->_weapon = NULL;
}

void HumanB::attack() {
	if(_weapon) {
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	} else {
		std::cout << _name << " attacks by hands. Look at this brave guy! " << std::endl;

	}
}

HumanB::~HumanB() {
	std::cout << "HumanB " << _name << " destroyed" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}