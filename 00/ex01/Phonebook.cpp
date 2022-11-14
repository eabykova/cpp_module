/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:08:59 by mmicheli          #+#    #+#             */
/*   Updated: 2022/10/27 13:08:59 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Phonebook.hpp"

Phonebook::Phonebook() {
	this->counter = 0;
}

Phonebook::~Phonebook() {}

void	Phonebook::addContactInfo() {
	std::string buf;

	std::cout << "Enter first name: ";
	std::cin >> buf;
	this->contacts[this->counter].setFirstName(buf);

	std::cout << "Enter last name: ";
	std::cin >> buf;
	this->contacts[this->counter].setLastName(buf);

	std::cout << "Enter nickname: ";
	std::cin >> buf;
	this->contacts[this->counter].setNickname(buf);

	std::cout << "Enter phone number: ";
	std::cin >> buf;
	this->contacts[this->counter].setPhoneNumber(buf);

	std::cout << "Enter darkest secret: ";
	std::cin >> buf;
	this->contacts[this->counter].setDarkestSecret(buf);

	std::cout << "Contact added successfully" << std::endl;
	this->counter++;
}

void	Phonebook::addContactToTheBook() {
	if (this->counter < 8) {
		addContactInfo();
	} else {
		this->counter = 0;
		addContactInfo();
	}
}

void	Phonebook::printContactToPrompt(int index) {
	std::cout << "Index: " << index << std::endl;
	std::cout <<"First Name: " << contacts[index].getFirstName() << std::endl;
	std::cout <<"Last Name: " << contacts[index].getLastName() << std::endl;
	std::cout <<"Nickname: " << contacts[index].getNickname() << std::endl;
	std::cout <<"Phone Number: " << contacts[index].getPhoneNumber() << std::endl;
	std::cout <<"Darkest secret: " << contacts[index].getDarkestSecret() << std::endl;
 }

void	Phonebook::showContacts() {
	std::string	input;
	int			index;

	searchContact();
	std::cout << "Enter index of the contact:" <<std::endl;
	while (true)
	{
		std::cout << "+";
		std::cin >> input;
		if (std::cin.eof())
			return ;
		std::cin.ignore(32767, '\n');
		if (input.length() == 1 && std::isdigit(input[0]))
			index = std::stoi(input);

		if (index >= 0 && index <= 7)
		{
			printContactToPrompt(index);
			break;
		} else {
			std::cout << "Wrong index. Try another." << std::endl;
			break ;
		}
	}
}

void	Phonebook::printContactToTable(std::string field) {

	std::cout << std::setw(10);
	std::cout <<  ((field.length() > 10) ? field.substr(0, 9) + "." : field) << "|";
}

void	Phonebook::searchContact() {

	std::cout << "*********************************************" << std::endl;
	std::cout << "|     Index|    F.Name|    L.Name|  Nickname|" << std::endl;
	std::cout << "*********************************************" << std::endl;

	for (int i = 0; i < PB_SIZE; i++)
	{
		std::cout << "|";
		std::cout << std::setw(10);
		std::cout << i << "|";
		printContactToTable(contacts[i].getFirstName());
		printContactToTable(contacts[i].getLastName());
		printContactToTable(contacts[i].getNickname());
		std::cout << std::endl;
	}
	std::cout << "*********************************************" << std::endl;
}