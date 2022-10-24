/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 22:16:34 by smuramat          #+#    #+#             */
/*   Updated: 2022/10/23 22:39:18 by smuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
private:
  std::string name;
  Weapon weapon;
public:
  HumanB(/* args */);
  ~HumanB();
  void  HumanB::attack();
};

HumanB::HumanB(/* args */)
{
}

HumanB::~HumanB()
{
}
