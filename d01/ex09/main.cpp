/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 15:37:15 by amovchan          #+#    #+#             */
/*   Updated: 2017/11/01 15:41:00 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int		main(void) {

	Logger	my_log("log_entry.log");
	my_log.log("logToConsole", "Hi Hi!!");
	my_log.log("logToFile", "Hello");
	return 0;
}
