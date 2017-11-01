/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_lib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 17:54:06 by amovchan          #+#    #+#             */
/*   Updated: 2017/10/30 17:54:11 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_LIB_H
# define PHONE_LIB_H

#include <iostream>
#include "Phone_book.hpp"


void	add_in_book(Phone_book *book);
void	read_comand(Phone_book *book);
void	search_contact(Phone_book *book);
#endif