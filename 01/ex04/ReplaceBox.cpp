/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReplaceBox.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:13:28 by mmicheli          #+#    #+#             */
/*   Updated: 2022/11/09 15:13:28 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ReplaceBox.hpp"

ReplaceBox::ReplaceBox(std::string fileName, std::string target, std::string replacement) {
	this->_fileName = fileName;
	this->_replacement = replacement;
	this->_target = target;
}

ReplaceBox::~ReplaceBox() {
	std::cout << "ReplaceBox is destroyed" << std::endl;
}

std::string ReplaceBox::replaceMechanism() {
	std::ifstream	srcFile(_fileName);
	std::string		resultFilename;
	std::string		buffer;
	int				i;

	if (!srcFile.is_open()) {
		std::cout << _fileName << ": couldn't be open. Fail" << std::endl;
		return "Error in source file";
	}
	resultFilename = _fileName + ".replacement";
	std::ofstream resultFile(resultFilename);
	if (!resultFile.is_open()) {
		std::cout << resultFilename << ": couldn't be open. Fail" << std::endl;
		return "Error in result file";
	}
	while (std::getline(srcFile, buffer)) {
		i = buffer.find(_target);
		while (i != -1) {
			buffer.erase(i, _target.length());
			buffer.insert(i, _replacement);
			i = buffer.find(_target, i + _target.length());
		}
		resultFile << buffer << std::endl;
	}
	return "Finished correctly";
}