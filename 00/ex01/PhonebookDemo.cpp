/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_demo.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:44:42 by mmicheli          #+#    #+#             */
/*   Updated: 2022/10/26 17:44:42 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Phonebook.hpp"

int	main(void)
{
	Phonebook phonebook;
	std::string input;

	std::cout << "Enter the command:" << std::endl;
	while (true) {
		std::cout << ">";
		std::cin >> input;
		if (std::cin.eof())
			return 0;
		if (input.compare("EXIT") == 0)
			break ;
		else if (input.compare("ADD") == 0)
			phonebook.addContactToTheBook();
		else if (input.compare("SEARCH") == 0)
			phonebook.showContacts();
		else
			std::cout << "Oops.. I don-t know such command. Try another" <<
			std::endl;
	}
	return (0);
}