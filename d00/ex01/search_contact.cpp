/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_contact.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 16:26:22 by amovchan          #+#    #+#             */
/*   Updated: 2017/10/30 16:26:25 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Phone_book.hpp"

void	print_contakt(Phone_book *book, int i) {

	std::cout << std::setw(10) << std::right << i + 1 << "|";
	book[i].first_name.length() > 10 ? std::cout << book[i].first_name.substr(0, 9) << ".|" :
	std::cout << std::setw(10) <<  std::right << book[i].first_name << "|";
	book[i].last_name.length() > 10 ? std::cout << book[i].last_name.substr(0, 9) << ".|" :
	std::cout << std::setw(10) <<  std::right << book[i].last_name << "|";
	book[i].nickname.length() > 10 ? std::cout << book[i].nickname.substr(0, 9) <<  ".|" << std::endl :
	std::cout << std::setw(10) <<  std::right << book[i].nickname << "|" << std::endl;

}

void	print_client(Phone_book client) {
	if (client.activ == 1) {
		std::cout << "first name:  " << client.first_name << std::endl;
		std::cout << "last name:  " << client.last_name << std::endl;
		std::cout << "nickname:  " << client.nickname << std::endl;
		std::cout << "login:  " << client.login << std::endl;
		std::cout << "postal address:  " << client.postal_address << std::endl;
		std::cout << "email address:  " << client.email_address << std::endl;
		std::cout << "phone number:  " << client.phone_number << std::endl;
		std::cout << "birthday date:  " << client.birthday_date << std::endl;
		std::cout << "favorite meal:  " << client.favorite_meal << std::endl;
		std::cout << "underwear color:  " << client.underwear_color << std::endl;
		std::cout << "darkest secret: " << client.darkest_secret << std::endl;
	}
	else
		std::cout << "Invalid index" << std::endl;
}

void	search_contact(Phone_book *book) {

	int i;
	int count;
	int flag;
	std::string	line;

	i = -1;
	flag = 0;
	while (++i < 9) {
		if (book[i].activ == 1){
			print_contakt(book, i);
			flag++;
		}
	}
	if (flag != 0) {
		std::cout << "Put index: ";
		std::getline(std::cin, line);
		count = atoi(line.c_str());
		if (count <= 0 || count > 8)
			std::cout << "Invalid index" << std::endl;
		else
			print_client(book[count - 1]);
	}
}