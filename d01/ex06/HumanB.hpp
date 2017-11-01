/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 21:23:21 by amovchan          #+#    #+#             */
/*   Updated: 2017/10/31 21:23:23 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include <iostream>
#include "Weapon.hpp"

class HumanB {

private:
	std::string	name;
	Weapon*		weapon;

public:
	HumanB(std::string new_name);
	void setWeapon(Weapon &weapon);
	~HumanB(void);
	void	attack(void);

};

#endif

