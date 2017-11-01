/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 19:58:51 by amovchan          #+#    #+#             */
/*   Updated: 2017/10/31 19:58:52 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) {

	int 	i = -1;
	std::string name[] = {"Brain", "Niko", "Sandra", "Zork", "Xorg", "Muhamed"};
	std::string type[] = {"big", "read", "blou", "liveliest",  "strongest"};
	Zombie* horde = new Zombie[N];
	while ( ++i < N) {
		horde[i].set_name(name[rand() % 6]);
		horde[i].set_type(type[rand() % 5]);
		horde[i].announce();
	}
	delete [] horde;
	return ;
}
