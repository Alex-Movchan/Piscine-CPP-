/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 20:22:07 by amovchan          #+#    #+#             */
/*   Updated: 2017/10/31 20:26:28 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main( void ) {
	std::string str = "HI THIS IS BRAIN";
	std::string* strPtr = &str;
	std::string& strRef = str;

	std::cout << "str output: " << str << std::endl;
	std::cout << "strPtr output: " << *strPtr << std::endl;
	std::cout << "stdRef output: " << strRef << std::endl;
	return 0;
}
