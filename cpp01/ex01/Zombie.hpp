/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:14:04 by smuramat          #+#    #+#             */
/*   Updated: 2022/10/23 19:04:35 by smuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string.h>
#include <iostream>

class Zombie
{
private:
  std::string  name;
public:
  Zombie();
  ~Zombie();
  void  set_name(std::string name);
  void  announce();
};

Zombie* zombieHorde( int N, std::string name );

#endif