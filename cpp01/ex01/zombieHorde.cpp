/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:36:07 by smuramat          #+#    #+#             */
/*   Updated: 2022/10/23 18:58:18 by smuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
  Zombie  *zombie;

  zombie = new Zombie[N];
  
  for (int i = 0; i < N; i++)
    zombie[i].set_name(name);
  return (zombie);
}