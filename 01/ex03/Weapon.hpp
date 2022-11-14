/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:54:33 by mmicheli          #+#    #+#             */
/*   Updated: 2022/11/09 11:54:33 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {
private:
    std::string _type;

public:
    const std::string	getType(void);
    void    			setType( const std::string weaponType);
	Weapon(const std::string type);
	~Weapon();
};

#endif