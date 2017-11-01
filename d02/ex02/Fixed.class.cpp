/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 17:18:33 by amovchan          #+#    #+#             */
/*   Updated: 2017/11/01 17:18:35 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.class.hpp"
#include <cmath>

Fixed::Fixed(void)  {

	this->raw = 0;
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::~Fixed(void) {

	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {

	return this->raw;
}

void Fixed::setRawBits( int const raw ) {

	this->raw = raw;
}

Fixed & Fixed::operator=(Fixed const & rhs) {

	std::cout << "Assignation operator called" << std::endl;
	this->raw = rhs.getRawBits();
	return *this;
}

Fixed & Fixed::operator*(Fixed const &a, Fixed const &b) {

	this->raw = a.getRawBits() * b.getRawBits();
	return *this;
}

Fixed::Fixed(int res) {

	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(res << nb_byt);
}

Fixed::Fixed(float res) {

	std::cout << "Float constructor called" << std::endl;
	this->raw = (int)roundf(res * (1 << nb_byt));
}

Fixed::Fixed(Fixed const &r) {

	std::cout << "Copy constructor called" << std::endl;
	*this = r;
	return;
}

float		Fixed::toFloat( void ) const {

	return ((float)this->raw / (1 << nb_byt));
}

int Fixed::toInt() const {

	return (this->raw >> nb_byt);
}

std::ostream &	operator<<(std::ostream & o, Fixed const & i) {

	o << i.toFloat();
	return o;
}