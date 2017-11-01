/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 18:40:32 by amovchan          #+#    #+#             */
/*   Updated: 2017/10/31 20:17:43 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int		main(void) {

	Zombei_Event* newEvent = new Zombei_Event;
	newEvent->randomChamp();
	delete newEvent;
	return 0;
}
