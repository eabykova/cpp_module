/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:57:03 by mmicheli          #+#    #+#             */
/*   Updated: 2022/11/09 17:57:03 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# include <iostream>

using std::cout;
using std::endl;

class Harl {
private:
	void			debug(void);
	void			info(void);
	void			warning(void);
	void			error(void);

public:
	Harl();
	~Harl();
	void	complain(std::string level);
};

#endif
