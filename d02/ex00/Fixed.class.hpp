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
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	Fixed(void);
	Fixed(Fixed const & r);
	~Fixed(void);
	Fixed &		operator=(Fixed const & rhs);
};

#endif