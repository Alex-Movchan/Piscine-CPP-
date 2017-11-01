/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 15:27:05 by amovchan          #+#    #+#             */
/*   Updated: 2017/10/30 15:27:09 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_lib.h"

std::string	getline(std::string line)
{
	std::cout << "\33[0;32mEnter the command: \33[0m";
	 	std::getline(std::cin, line);
	return (line);
}

void	read_comand(Phone_book *book) {

	std::string	line;

	while ((line = getline(line)) != "EXIT") {
		if (line == "ADD")
			add_in_book(book);
		else if (line == "SEARCH")
			search_contact(book);
		else if (line[0] != '\0')
			std::cout << "useg: [ADD | SEARCH | EXIT]" << std::endl;
	}
}

int	main(void) {

	Phone_book book[8];

	read_comand(book);
	return (0);
}

