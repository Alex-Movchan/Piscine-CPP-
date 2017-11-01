/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 13:19:07 by amovchan          #+#    #+#             */
/*   Updated: 2017/11/01 14:35:24 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int		main(void) {

	Human	name;

	name.action("meleeAttack", "Bob");
	name.action("rangedAttack", "Nik");
	name.action("intimidatingShout", "Jeak");
	return 0;
}
