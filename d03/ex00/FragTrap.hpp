/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 19:55:27 by amovchan          #+#    #+#             */
/*   Updated: 2017/11/02 19:55:29 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#import <iostream>

class FragTrap {

private:
	unsigned int	Hit_point;
	unsigned int	max_Hit_point;
	unsigned int	energy_point;
	unsigned int	max_energi_point;
	unsigned int	level;
	std::string	name;
	unsigned int	melee_attack_damage;
	unsigned int ranged_attack_bamage;
	unsigned int armor_damage_reduction;

public:
	FragTrap(void);
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);


};

#endif