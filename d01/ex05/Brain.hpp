/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 20:27:36 by amovchan          #+#    #+#             */
/*   Updated: 2017/10/31 20:27:38 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>
#include <sstream>

class Brain {

private:
	std::string address;

public:

	Brain( void );
	std::string identify(void);
	~Brain( void );

};

#endif