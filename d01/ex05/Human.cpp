/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 20:27:52 by amovchan          #+#    #+#             */
/*   Updated: 2017/10/31 20:27:53 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void) {
	return ;
}

Human::~Human(void) {

	return;
}

Brain	Human::get_Brain() {

	return (this->_brain);
}

std::string	Human::identify() {

	return (this->_brain.identify());
}