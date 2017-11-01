/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 13:18:27 by amovchan          #+#    #+#             */
/*   Updated: 2017/11/01 14:34:38 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void	Human::meleeAttack(std::string const & target) {

	std::cout << "melee Attack " << target << std::endl;
}

void	Human::rangedAttack(std::string const &target) {

	std::cout << "reanged Attack " << target << std::endl;
}

void	Human::intimidatingShout(std::string const & target) {

	std::cout << "intimidating Attack " << target << std::endl; 
}

void	Human::action(std::string const & action_name, std::string const &target) {

	std::string tmp[] = { "meleeAttack", "rangedAttack", "intimidatingShout"};
	typedef void (Human::*func)(std::string const &);
	const func	argv[] = { &Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout };
	for (int i = 0; i < 3; i++)
	{
		if (tmp[i] == action_name)
		{
			(this->*argv[i])(target);
			break;
		}
	}
}
