/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:11:24 by mmicheli          #+#    #+#             */
/*   Updated: 2022/11/09 16:11:24 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
	functions[0] = &Harl::debug;
	functions[1] = &Harl::info;
	functions[2] = &Harl::warning;
	functions[3] = &Harl::error;
}

Harl::~Harl() {}

void Harl::complain(std::string level) {
	int	i = 4;

	i -= !level.compare("DEBUG") * 4 + !level.compare("INFO") * 3 + !level.compare("WARNING") * 2 + !level.compare
			("ERROR");
	(this->*functions[i])();
}

void Harl::debug() {
	cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really "
				 "do!" << endl;
}

void Harl::info() {
	cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you "
			"did, I wouldn’t be asking for more!" << endl;
}

void Harl::warning() {
	cout << "I think I deserve to have some extra bacon for free. I’ve been coming for"
			"years whereas you started working here since last month." << endl;
}

void Harl::error() {
	cout << "This is unacceptable! I want to speak to the manager now." << endl;
}

