/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 22:16:16 by smuramat          #+#    #+#             */
/*   Updated: 2022/10/28 19:16:00 by smuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

//HumanBのコンストラクタ引数にweaponはないので、nullptrを渡す必要がある。
//nullptrは参照では表せないのでweaponクラスのポインタを用意する
HumanB::HumanB(std::string name): name(name), weapon(nullptr)
{
}

HumanB::~HumanB()
{
}

void  HumanB::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon->getType() <<std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
