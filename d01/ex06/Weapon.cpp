/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 21:22:40 by amovchan          #+#    #+#             */
/*   Updated: 2017/10/31 21:22:42 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string ttype) {

	this->_type = ttype;
	return ;
}

Weapon::~Weapon(void) {
	return;
}

void	Weapon::setType(std::string newtype) {

	this->_type = newtype;
	return;
}

std::string	Weapon::getType() {
	return (this->_type);
}