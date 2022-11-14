/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:29:10 by mmicheli          #+#    #+#             */
/*   Updated: 2022/11/07 15:29:10 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie {
private:
	std::string _name;

public:
	void	announce(void);
	Zombie(const  std::string &zombie_name);
	~Zombie();
};

Zombie*	newZombie(std::string zombie_name);
void	randomChump(std::string zombie_name);

#endif