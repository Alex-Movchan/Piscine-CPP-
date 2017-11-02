/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 17:18:26 by amovchan          #+#    #+#             */
/*   Updated: 2017/11/01 17:18:27 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLAS_H
#define FIXED_CLAS_H

class Fixed {

private:
	int 				raw;
	static const int	nb_byt = 8;

public:
	int			getRawBits( void ) const;
	void		setRawBits( int const raw );
	float		toFloat( void ) const;
	int			toInt( void ) const;
	Fixed(void);
	Fixed(int res);
	Fixed(float res);
	Fixed(Fixed const & r);
	~Fixed(void);
	Fixed &  	operator++();
	Fixed       operator++(int);
	Fixed &		operator--();
	Fixed       operator--(int);
	Fixed &		operator=(Fixed const & rhs);
	Fixed		operator*(Fixed const & b);
	Fixed       operator*(int res);
	Fixed       operator+(Fixed const &res);
	Fixed       operator+(int res);
	Fixed       operator-(Fixed const &res);
	Fixed  	    operator-(int res);
	Fixed       operator/(Fixed const &res);
	Fixed      	operator/(int res);
	static Fixed const	&	max(Fixed const & s1, Fixed const & s2);
	static Fixed const	&	min(Fixed const & s1, Fixed const & s2);
	static Fixed	&		max(Fixed  & s1, Fixed & s2);
	static Fixed 	&	min(Fixed  & s1, Fixed & s2);
	bool        operator==(Fixed const & s1);
	bool        operator!=(Fixed const & s1);
	bool        operator<=(Fixed const & s1);
	bool        operator>=(Fixed const & s1);
	bool        operator<(Fixed const & s1);
	bool        operator>(Fixed const & s1);





};


std::ostream &	operator<<(std::ostream & o, Fixed const & i);

#endif