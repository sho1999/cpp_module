/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 22:10:27 by smuramat          #+#    #+#             */
/*   Updated: 2022/10/23 22:45:24 by smuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
private:
  std::string name;
  Weapon weapon;
public:
  HumanA(std::string name, Weapon &weapon);
  ~HumanA();
  void  HumanA::attack(); 
};
