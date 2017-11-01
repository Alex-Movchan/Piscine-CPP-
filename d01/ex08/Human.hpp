/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 13:00:15 by amovchan          #+#    #+#             */
/*   Updated: 2017/11/01 14:36:18 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H

# include <iostream>

class Human {

private:
		void meleeAttack(std::string const & target);
		void rangedAttack(std::string const & target);
		void intimidatingShout(std::string const & target);
public:
		void action(std::string const & action_name, std::string const & target);
};

#endif
