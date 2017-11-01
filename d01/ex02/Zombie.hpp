/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 18:39:58 by amovchan          #+#    #+#             */
/*   Updated: 2017/10/31 18:39:59 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie {

private:
	std::string	name;
	std::string	type;

public:
	void settype(std::string &type);
	std::string	gettype(void);
	Zombie(std::string  mane);
	~Zombie( void );
	void	announce( void );
};

#endif
