/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 11:33:07 by amovchan          #+#    #+#             */
/*   Updated: 2017/11/01 12:50:15 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int		main(int ac, char **av) {


	if (ac != 4)
	{
        std::cout << "\33[0;31mUsag: ./Sed_is_for_losers [filename] [string] [string]\33[0m" << std::endl;
		return -1;
	}
	size_t			len;
	std::string		buff;
	std::string		filename = av[1];
	std::string		dst = av[2];
	std::string		src = av[3];
	std::ifstream	ifs(filename);
	if (!ifs)
	{
        std::cout << "\33[0;31mError: no such file: " << filename << "\33[0m"  <<  std::endl;
		return -1;
	}
	std::ofstream	ofs(filename+ ".replace");
	while ( std::getline(ifs, buff) )
	{
		len = 0;
		while ((len = buff.find(dst, len)) != std::string::npos)
		{
			buff.replace(len, dst.length(), src);
			len += src.length();
		}
		ofs << buff << std::endl;
	}
	ifs.close();
	ofs.close();
	return 0;
}
