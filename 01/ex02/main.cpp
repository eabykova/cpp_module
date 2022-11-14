/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:57:11 by mmicheli          #+#    #+#             */
/*   Updated: 2022/11/07 17:57:11 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void) {
	using std::cout;
	using std::endl;

	std::string simpleString = "HI THIS IS BRAIN";
	std::string *stringPTR;
	std::string &stringREF = simpleString;

	stringPTR = &simpleString;

	cout << "The memory address of the simpleString variable is: " << &simpleString << endl;
	cout << "The memory address held by stringPTR is: " << stringPTR << endl;
	cout << "The memory address held by stringREF is: " << &stringREF << endl;
	cout << endl;

	cout << "The value of the simpleString variable is: " << simpleString << endl;
	cout << "The value pointed to by stringPTR is: " << *stringPTR << endl;
	cout << "The value pointed to by stringREF is: " << stringREF << endl;

	return (0);
}

