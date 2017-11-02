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
	return;
}

Fixed::~Fixed(void) {

}

int Fixed::getRawBits( void ) const {

	return this->raw;
}

void Fixed::setRawBits( int const raw ) {

	this->raw = raw;
}

Fixed & Fixed::operator=(Fixed const & rhs) {

	this->raw = rhs.getRawBits();
	return *this;
}

Fixed & Fixed::operator++() {
	++this->raw;
	return *this;
}

Fixed & Fixed::operator--() {
	--this->raw;
	return *this;
}

Fixed Fixed::operator++(int) {

	Fixed fi(this->toFloat());
	this->raw++;
	return fi;
}

Fixed Fixed::operator--(int) {

	Fixed fi(this->toFloat());
	this->raw--;
	return fi;
}

Fixed  Fixed::operator*(Fixed const &b) {

	return Fixed(this->toFloat() * b.toFloat());
}

Fixed::Fixed(int res) {

	this->setRawBits(res << nb_byt);
}

Fixed::Fixed(float res) {

	this->raw = (int)roundf(res * (1 << nb_byt));
}

Fixed::Fixed(Fixed const &r) {

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

Fixed Fixed::operator+(Fixed const &res) {


	return Fixed(this->toFloat() + res.toFloat());
}

Fixed Fixed::operator+(int res) {

	return Fixed(this->toInt() + res);
}

Fixed Fixed::operator*(int res) {

	return Fixed(this->toInt() + res);
}

Fixed Fixed::operator-(int res) {

	return Fixed(this->toInt() - res);
}

Fixed Fixed::operator-(Fixed const &res) {

	return Fixed(this->toFloat() - res.toFloat());
}

Fixed Fixed::operator/(int res) {

	if (this->raw != 0 && res != 0)
		return Fixed(this->toInt() / res);
	else
		return Fixed(0);
}

Fixed Fixed::operator/(Fixed const &res) {

	return Fixed(this->toFloat() / res.toFloat());
}

bool       Fixed::operator==(Fixed const & s1) {

	return this->getRawBits() == s1.getRawBits();
}

bool        Fixed::operator!=(Fixed const & s1) {

	return (this->getRawBits() != s1.getRawBits());
}

bool        Fixed::operator<=(Fixed const & s1) {

	return this->getRawBits() <= s1.getRawBits();
}

bool        Fixed::operator<(Fixed const & s1) {

	return this->getRawBits() < s1.getRawBits();
}
bool        Fixed::operator>(Fixed const & s1) {

		return this->getRawBits() > s1.getRawBits();
}

bool        Fixed::operator>=(Fixed const & s1) {

		return this->getRawBits() >= s1.getRawBits();
}

Fixed const & Fixed::max(Fixed const &s1, Fixed const &s2) {

	return s1.getRawBits() < s2.getRawBits() ? s2 : s1;
}

Fixed const & Fixed::min(Fixed const &s1, Fixed const &s2) {

	return s1.getRawBits() > s2.getRawBits() ? s2 : s1;
}

Fixed  & Fixed::max(Fixed &s1, Fixed &s2) {

	return s1.getRawBits() < s2.getRawBits() ? s2 : s1;
}

Fixed 	& Fixed::min(Fixed &s1, Fixed &s2) {

	return s1.getRawBits() > s2.getRawBits() ? s2 : s1;
}