/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 20:27:57 by amovchan          #+#    #+#             */
/*   Updated: 2017/10/31 20:27:59 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
#define HUMAN_H

#include "Brain.hpp"

class Human {

private:
	Brain	_brain;

public:
	Human(void);
	~Human(void);
	std::string	identify(void);
	Brain		get_Brain(void);
};

#endif