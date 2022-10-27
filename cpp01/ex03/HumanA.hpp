/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:24:25 by smuramat          #+#    #+#             */
/*   Updated: 2022/10/26 10:37:28 by smuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
private:
  std::string name;
  Weapon weapon;
public:
  HumanA(std::string name, Weapon weapon);
  ~HumanA();
  void  attack(); 
};
