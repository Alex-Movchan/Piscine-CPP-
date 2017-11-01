/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 21:22:48 by amovchan          #+#    #+#             */
/*   Updated: 2017/10/31 21:22:50 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon {

private:
	std::string	_type;
public:
	Weapon(std::string ttype);
	~Weapon(void);
	void		setType(std::string newtype);
	std::string	getType(void);

};

#endif
