/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 22:04:27 by smuramat          #+#    #+#             */
/*   Updated: 2022/10/23 22:32:23 by smuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <iostream>

class Weapon
{
private:
  std::string type;
public:
  Weapon(std::string type);
  ~Weapon();
  void  setType(std::string type);
  const std::string &getType();
};

Weapon::Weapon(std::string type)
{
  this->setType(type);
}

Weapon::~Weapon()
{
}
