/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 18:39:38 by amovchan          #+#    #+#             */
/*   Updated: 2017/10/31 18:39:40 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {

	this->name = name;
	std::cout << "Zombie " << this->name << " has created" << std::endl;
	return;
}

Zombie::~Zombie( void ) {

	std::cout << "Zombie " << this->name << " has died" << std::endl;
	return;
}

void	Zombie::announce( void ) {

	std::cout << "<" << this->name <<  " (" << this->type << ")> Braiiiiiiinnnssss..." << std::endl;
	return;
}

std::string	Zombie::gettype(void) {

	return this->type;
}

void	Zombie::settype(std::string &type) {

	this->type = type;
}