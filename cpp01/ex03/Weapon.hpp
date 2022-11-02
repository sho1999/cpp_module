/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:24:52 by smuramat          #+#    #+#             */
/*   Updated: 2022/10/28 19:28:27 by smuramat         ###   ########.fr       */
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
  Weapon( std::string type );
  ~Weapon( void );
  void  setType(std::string type);
  // データの読み込みだけなのでconstメンバ関数にする
  // 返り値の参照先の値は変更できてしまうので、返り値constにする
  const std::string& getType( void ) const;

};

#endif
