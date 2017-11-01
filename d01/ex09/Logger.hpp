/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 14:36:31 by amovchan          #+#    #+#             */
/*   Updated: 2017/11/01 15:54:13 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
#include <fstream>
#include <ctime>

class Logger {

private:
	void		logToConsole(std::string const & cons);
	void		logToFile(std::string const & str);
	std::string	makeLogEntry(std::string maseg);
	std::string	file;

public:
	Logger(std::string file);
	void		log(std::string const & dest, std::string const & message);
};

#endif
