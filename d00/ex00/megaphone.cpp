/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 11:59:52 by amovchan          #+#    #+#             */
/*   Updated: 2017/10/30 12:29:14 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int ac, char **av)
{
	int		i;
	int		j;

	i = 0;
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (++i < ac)
	{
		j = -1;
		while (av[i][++j])
			std::cout << (char)toupper(av[i][j]);
	}
	std::cout << std::endl;
	return (0);
}
