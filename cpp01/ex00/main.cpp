/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:44:57 by smuramat          #+#    #+#             */
/*   Updated: 2022/10/23 18:05:13 by smuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
  Zombie zombie("Tom");
  zombie.announce();

  Zombie *zombie2 = newZombie("Jone");
  zombie2->announce();

  randomChump("Som");

  delete zombie2;
}