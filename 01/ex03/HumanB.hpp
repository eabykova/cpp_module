/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:54:30 by mmicheli          #+#    #+#             */
/*   Updated: 2022/11/09 11:54:30 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanB {
private:
	Weapon *_weapon;
	std::string _name;

public:
	HumanB(const std::string &name);
	void	attack();
	void	setWeapon(Weapon &weapon);
	~HumanB();
};

#endif