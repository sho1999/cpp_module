/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:34:54 by smuramat          #+#    #+#             */
/*   Updated: 2022/10/23 20:20:44 by smuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

__attribute__((destructor))
static void destructor() {
    system("leaks -q zombie");
}

int main()
{
  Zombie *zombie;
  
  zombie = zombieHorde( 5, "Tom" );
  
  for (size_t i = 0; i < 5; i++)
    zombie[i].announce();
  delete[] zombie;
}