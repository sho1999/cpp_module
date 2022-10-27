/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 22:16:16 by smuramat          #+#    #+#             */
/*   Updated: 2022/10/26 10:56:08 by smuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : weapon("")
{
	this->name = name;
}

HumanB::~HumanB()
{
}

void  HumanB::attack()
{
	std::cout << this->name << " attacks with their " << weapon.getType() <<std::endl;
}

void	HumanB::set_weapon(Weapon &weapon)
{
	this->weapon = weapon;
}
