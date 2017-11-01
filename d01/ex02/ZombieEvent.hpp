/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 18:40:22 by amovchan          #+#    #+#             */
/*   Updated: 2017/10/31 18:40:23 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBEI_EVENT_H
#define ZOMBEI_EVENT_H

#include <iostream>
#include "Zombie.hpp"

class Zombei_Event {

public:
	Zombie*	newZombie(std::string name);
	void	setZombieType(Zombie* zomb,  std::string type);
	void	randomChamp(void);
	void	deleteZombie(Zombie* zomb);
};

#endif