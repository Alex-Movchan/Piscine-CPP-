/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 21:23:00 by amovchan          #+#    #+#             */
/*   Updated: 2017/10/31 21:23:03 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon1) : _weapon(weapon1), name(name) {

	return ;
}

HumanA::~HumanA() {
	return;
}

void	HumanA::attack() {

	std::cout << this->name << " attacks whith his " << this->_weapon.getType() << std::endl;
}