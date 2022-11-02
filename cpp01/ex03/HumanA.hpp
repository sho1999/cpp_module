/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:24:25 by smuramat          #+#    #+#             */
/*   Updated: 2022/10/28 19:44:57 by smuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
private:
  std::string name;
  // nullptrを表現する必要でもない限り、引数にはポインタよりも参照を優先する
  Weapon &weapon;
public:
  HumanA(std::string name, Weapon &weapon);
  ~HumanA();
  void  attack(); 
};
