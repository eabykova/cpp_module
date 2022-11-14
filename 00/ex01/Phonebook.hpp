/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:19:34 by mmicheli          #+#    #+#             */
/*   Updated: 2022/10/27 13:19:34 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include "Contact.hpp"

# define PB_SIZE 8

class	Phonebook {
private:
	Contact	contacts[PB_SIZE];
	int		counter;
	void	printContactToTable(std::string field);
	void	printContactToPrompt(int index);

public:
	Phonebook();
	~Phonebook();

	void	showContacts();
	void	addContactInfo();
	void	addContactToTheBook();
	void	searchContact();
};

#endif