/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:57:50 by mmicheli          #+#    #+#             */
/*   Updated: 2022/11/09 17:57:50 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::complain(std::string level) {
	int	i = 4;

	i -= !level.compare("DEBUG") * 4 + !level.compare("INFO") * 3 + !level.compare("WARNING") * 2 + !level.compare
			("ERROR");
	switch (i)
	{
		case 0:
			debug();
		case 1:
			info();
		case 2:
			warning();
		case 3:
			error();
			break;
		default:
			cout << "Probably complaining about insignificant problems" << endl;
			break;
	}
}

void Harl::debug() {
	cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I "
			"really "
			"do!" << endl;
}

void Harl::info() {
	cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! "
			"If you did, I wouldn’t be asking for more!" << endl;
}

void Harl::warning() {
	cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I’ve been coming for"
			"years whereas you started working here since last month." << endl;
}

void Harl::error() {
	cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now." << endl;
}

