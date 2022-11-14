/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:54:27 by mmicheli          #+#    #+#             */
/*   Updated: 2022/11/09 11:54:27 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanA {
private:
    Weapon		&_weapon;
    std::string	_name;

public:
    HumanA(const std::string &name, Weapon &_newWeapon);
	void attack();
	~HumanA();
};

#endif
