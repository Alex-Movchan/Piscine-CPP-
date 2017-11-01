/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 17:27:03 by amovchan          #+#    #+#             */
/*   Updated: 2017/10/31 17:27:06 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

#include <iostream>

class Pony {

private:
	std::string	color;
	int			age;
	std::string	name;

public:
	Pony( void );
	std::string		getname(void);
	Pony(std::string name, std::string color, int age);
	~Pony( void );
};

#endif