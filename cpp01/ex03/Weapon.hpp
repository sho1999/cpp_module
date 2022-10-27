/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:24:52 by smuramat          #+#    #+#             */
/*   Updated: 2022/10/26 16:56:24 by smuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
  #define WEAPON_HPP

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

#endif
