/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:37:46 by mmicheli          #+#    #+#             */
/*   Updated: 2022/11/07 17:37:46 by mmicheli         ###   ########.fr       */
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
	void	setName(const std::string &zombie_name);
	Zombie();
	~Zombie();

};

Zombie* zombieHorde(int N, std::string name);

#endif