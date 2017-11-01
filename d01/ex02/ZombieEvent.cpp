/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 18:40:14 by amovchan          #+#    #+#             */
/*   Updated: 2017/10/31 20:14:37 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

Zombie*	Zombei_Event::newZombie(std::string name) {

	Zombie* newZombie = new Zombie(name);
	return (newZombie);
}

void	Zombei_Event::setZombieType(Zombie* zomb,  std::string type) {

	zomb->settype(type);
	return;
}

void	Zombei_Event::deleteZombie(Zombie *zomb) {

	delete zomb;
}

void	Zombei_Event::randomChamp( void ) {

	std::string	name[] = {"Brain", "Niko", "Sandra", "Zork", "Xorg", "Muhamed"};
	std::string	type[] = {"big", "read", "blou", "liveliest",  "strongest"};
	Zombie* zomb = this->newZombie(name[rand() % 6]);
	this->setZombieType(zomb, type[rand() % 5]);
	zomb->announce();
	this->deleteZombie(zomb);
}
