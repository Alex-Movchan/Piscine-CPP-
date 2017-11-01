/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 14:36:43 by amovchan          #+#    #+#             */
/*   Updated: 2017/11/01 16:00:42 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

Logger::Logger(std::string file) : file(file) {

	return;
}

void		Logger::logToConsole(std::string const & con) {

	std::cout << this->makeLogEntry(con) << std::endl;
}

std::string	Logger::makeLogEntry(std::string maseg) {

	time_t		t = time(NULL);
	char		buff[20];
	std::string	str;
	strftime(buff, 20, "[%Y%m%d_%H%M%S]", gmtime(&t));
	str = buff;
	str.append(" " +maseg);
	return str;
}

void		Logger::logToFile(std::string const & str) {

	std::ofstream	ofs(this->file);
	ofs << this->makeLogEntry(str) << std::endl;
	ofs.close();
}

void		Logger::log(std::string const & dest, std::string const & message) {

	std::string	tmp[] = {"logToConsole", "logToFile"};
	typedef void (Logger::*func)(std::string const &);
	const func argv[] = { &Logger::logToConsole, &Logger::logToFile };
	for(int i = 0; i < 2; i++)
	{
		if (tmp[i] == dest)
		{
			(this->*argv[i])(message);
			break;
		}
	}
}
