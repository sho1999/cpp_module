/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 22:12:08 by smuramat          #+#    #+#             */
/*   Updated: 2022/10/26 10:37:18 by smuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon) : weapon("")
{
	this->name = name;
	this->weapon = weapon;
}

HumanA::~HumanA()
{
}

void  HumanA::attack()
{
	std::cout << this->name << " attacks with their " << weapon.getType() <<std::endl;
}
