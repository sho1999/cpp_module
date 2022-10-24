/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:16:43 by smuramat          #+#    #+#             */
/*   Updated: 2022/10/23 20:16:57 by smuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void  Zombie::set_name(std::string name)
{
  this->name = name;
  std::cout << this->name << " was born" << std::endl;
}

void Zombie::announce()
{
  std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(){}

Zombie::~Zombie()
{
  std::cout << this->name << " is died" << std::endl;
}