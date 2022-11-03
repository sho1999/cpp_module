/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:51:35 by smuramat          #+#    #+#             */
/*   Updated: 2022/11/03 16:09:45 by smuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
  ClapTrap Ken("Ken");
	ClapTrap Zoo("Zoo");

	Ken.attack("Zoo");
	Ken.attack("Zoo");
	Ken.attack("Zoo");
  Ken.attack("Zoo");
	Ken.attack("Zoo");
	Zoo.takeDamage(2);
	Zoo.attack("Ken");
	Ken.takeDamage(2);
	Ken.beRepaired(2);
	Zoo.takeDamage(2);
	Zoo.takeDamage(2);
  Zoo.takeDamage(2);
	Zoo.takeDamage(2);
	Zoo.attack("Ken");
	Zoo.beRepaired(3);
}