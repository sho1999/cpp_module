/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:16:43 by smuramat          #+#    #+#             */
/*   Updated: 2022/10/23 20:16:42 by smuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string tmp_name)
{
  this->name = tmp_name;
}

Zombie::~Zombie()
{
  std::cout << this->name << " is died" << std::endl;
}

void Zombie::announce()
{
  std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
