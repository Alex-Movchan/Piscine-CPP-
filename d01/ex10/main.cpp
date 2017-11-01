/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 16:04:48 by amovchan          #+#    #+#             */
/*   Updated: 2017/11/01 16:30:48 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	read_write_term(std::string buff) {

	while(std::getline(std::cin, buff))
		std::cout << buff << std::endl;
}

int		main(int ac, char **av) {

	int			i = 0;
	std::string	buff;

	if (ac == 1) {
		read_write_term(buff);
		return 0;
	}
	while (++i < ac) {
		if (av[i][0] == '-' && av[i][1] == 0)
			read_write_term(buff);
		else
		{
			std::ifstream	ifs(av[i]);
			if (!ifs)
				std::cout << "\33[0;31mcato9tails: No such file or directory: " <<  av[i] << "\33[0m" << std::endl;
			else {
					while(std::getline(ifs, buff))
							std::cout << buff << std::endl;
					ifs.close();	
				}		
		}
	}
	return 0;
}
