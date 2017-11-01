/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 21:23:07 by amovchan          #+#    #+#             */
/*   Updated: 2017/10/31 21:23:09 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include <iostream>
#include "Weapon.hpp"

class HumanA {

private:
	std::string	name;
	Weapon&		_weapon;

public:
	HumanA(std::string name, Weapon& weapon1);
	~HumanA(void);
	void	attack(void);

};

#endif