/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:14:04 by smuramat          #+#    #+#             */
/*   Updated: 2022/10/23 19:00:02 by smuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string.h>
#include <iostream>

class Zombie
{
private:
  std::string name;
public:
  Zombie(std::string tmp_name);
  void announce();
  ~Zombie();
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif