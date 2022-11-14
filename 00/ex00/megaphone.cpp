/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:19:42 by mmicheli          #+#    #+#             */
/*   Updated: 2022/10/24 19:19:42 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string.h>

int	main(int argc, char **argv)
{
	char	ch;

	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	} else
	{
		for (int i = 1; i < argc; i++)
		{
			for (int j = 0; j < strlen(argv[i]); j++)
			{
				ch = toupper(argv[i][j]);
				std::cout << ch;
			}
		}
	}
	std::cout << std::endl;
	return(0);
}