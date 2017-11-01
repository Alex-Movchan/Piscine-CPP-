/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_in_book.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 15:37:43 by amovchan          #+#    #+#             */
/*   Updated: 2017/10/30 15:37:45 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phone_book.hpp"

void	init_in_book(Phone_book *book, int i)
{
	book[i].activ = 1;
	std::cout << "first name: ";
	std::getline(std::cin, book[i].first_name);
	std::cout << "last name: ";
	std::getline(std::cin, book[i].last_name);
	std::cout << "nickname: ";
	std::getline(std::cin, book[i].nickname);
	std::cout << "login: ";
	std::getline(std::cin, book[i].login);
	std::cout << "postal address: ";
	std::getline(std::cin, book[i].postal_address);
	std::cout << "email address: ";
	std::getline(std::cin, book[i].email_address);
	std::cout << "phone number: ";
	std::getline(std::cin, book[i].phone_number);
	std::cout << "birthday date: ";
	std::getline(std::cin, book[i].birthday_date);
	std::cout << "favorite meal: ";
	std::getline(std::cin, book[i].favorite_meal);
	std::cout << "underwear color: ";
	std::getline(std::cin, book[i].underwear_color);
	std::cout << "darkest secret: ";
	std::getline(std::cin, book[i].darkest_secret);
}

void	add_in_book(Phone_book *book)
{
	int i;

	i = -1;
	while (++i < 9) {
		if (book[i].activ == 0)
			break ;
	}
	if (i == 9)
		std::cout << "Not enough memory" << std::endl;
	else
		init_in_book(book, i);
}