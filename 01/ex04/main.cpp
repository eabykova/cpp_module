/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:29:57 by mmicheli          #+#    #+#             */
/*   Updated: 2022/11/09 13:29:57 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ReplaceBox.hpp"

int	checkArgc(int argc) {
	if (argc == 4) {
		return (1);
	} else {
		if (argc < 4)
			std::cout << "Too less arguments" << std::endl;
		else
			std::cout << "Too much arguments" << std::endl;
		return (0);
	}
}

int main(int argc, char **argv) {
	std::string resultMessage;
	if (checkArgc(argc)) {
		ReplaceBox replaceBox(argv[1], argv[2], argv[3]);
		resultMessage = replaceBox.replaceMechanism();
		std::cout << resultMessage << std::endl;
		return (0);
	}
	return (1);
}