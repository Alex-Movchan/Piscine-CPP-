/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 21:23:29 by amovchan          #+#    #+#             */
/*   Updated: 2017/10/31 21:23:31 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string new_name) {

	this->name = new_name;
	return ;
}

HumanB::~HumanB() {
	return;
}

void	HumanB::setWeapon(Weapon &weapon) {

	this->weapon = &weapon;
	return;
}

void	HumanB::attack() {

	std::cout << this->name << " attacks whith his " << this->weapon->getType() << std::endl;
}