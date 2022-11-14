/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:03:30 by mmicheli          #+#    #+#             */
/*   Updated: 2022/11/09 12:03:30 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string type) {
	this->_type = type;
}

Weapon::~Weapon() {
	std::cout << "Weapon " << _type << " destroyed" << std::endl;
}

const std::string Weapon::getType() {
	return _type;
}

void Weapon::setType(const std::string weaponType) {
	this->_type = weaponType;
}
