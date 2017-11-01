/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 20:27:28 by amovchan          #+#    #+#             */
/*   Updated: 2017/10/31 20:27:29 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {

	void*	address = (void*)(this);
	std::stringstream sstream;
	sstream << address;
	this->address = sstream.str();
	return;
}

Brain::~Brain(void) {

	return;
}

std::string	Brain::identify(void) {

	return (this->address);
}