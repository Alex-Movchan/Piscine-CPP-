/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 20:28:06 by amovchan          #+#    #+#             */
/*   Updated: 2017/10/31 20:28:09 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int 	main(void) {

	Human	Zork;

	std::cout << Zork.identify() << std::endl;
	std::cout << Zork.get_Brain().identify() << std::endl;
}
