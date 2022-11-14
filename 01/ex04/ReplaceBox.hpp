/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReplaceBox.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:48:13 by mmicheli          #+#    #+#             */
/*   Updated: 2022/11/09 14:48:13 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACEBOX_HPP
# define REPLACEBOX_HPP

#include <iostream>
#include <fstream>

class ReplaceBox {
private:
	std::string _fileName;
	std::string _target;
	std::string _replacement;

public:
	ReplaceBox(std::string fileName, std::string target, std::string replacement);
	~ReplaceBox();
	std::string replaceMechanism();
};

#endif

