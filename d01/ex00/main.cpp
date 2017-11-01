/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 17:27:16 by amovchan          #+#    #+#             */
/*   Updated: 2017/10/31 17:27:18 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

void	ponyOnTheHeap( std::string name, std::string color, int age ) {

	Pony *p = new Pony (name, color, age);
	std::cout << "Pony " << p->getname() << " on the Heap" << std::endl;
	delete p;
}

void	ponyOnTheStack( std::string name, std::string color, int age ) {

	Pony	pony(name, color, age);

	std::cout << "Pony " << pony.getname() << "on the Stack" << std::endl;
}

int 	main(void) {

	Pony	pony("Bemby", "white", 3);

	ponyOnTheHeap("Butch", "black", 1);
	ponyOnTheStack("Pon", "read", 13);

	return (0);
}
