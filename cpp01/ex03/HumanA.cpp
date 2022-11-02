/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 22:12:08 by smuramat          #+#    #+#             */
/*   Updated: 2022/10/28 19:34:12 by smuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

//weaponは参照しているので宣言時に初期化の値が必要
HumanA::HumanA(std::string name, Weapon &weapon): name(name), weapon(weapon)
{
}

HumanA::~HumanA()
{
}

void  HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() <<std::endl;
}
