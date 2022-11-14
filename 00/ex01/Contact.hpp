/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:22:09 by mmicheli          #+#    #+#             */
/*   Updated: 2022/10/27 13:22:09 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class	Contact {
private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string _darkest_secret;

public:
	Contact();
	~Contact();

	void	setFirstName(std::string first_name);
	void	setLastName(std::string last_name);
	void	setNickname(std::string nickname);
	void	setPhoneNumber(std::string phone_number);
	void	setDarkestSecret(std::string darkest_secret);

	std::string	getFirstName();
	std::string	getLastName();
	std::string	getNickname();
	std::string	getPhoneNumber();
	std::string	getDarkestSecret();
};

#endif