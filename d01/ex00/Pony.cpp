/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 17:26:51 by amovchan          #+#    #+#             */
/*   Updated: 2017/10/31 17:26:55 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

Pony::Pony(std::string name, std::string color, int age) {

	this->name = name;
	this->color = color;
	this->age = age;
	std::cout << "Pony " << this->name << " is " << this->color << " for her " << this->age << " years" << std::endl;
	return;
}

std::string	Pony::getname(void) {
	return (this->name);
}


Pony::~Pony( void ) {

	std::cout << "let go pony " << this->name << std::endl;
	return;
}

Pony::Pony( void ) {

	std::cout << "Caught a not-known pony" << std::endl;
}