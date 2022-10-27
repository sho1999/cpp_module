/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:34:54 by smuramat          #+#    #+#             */
/*   Updated: 2022/10/26 16:22:43 by smuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	// Weapon club = Weapon("crude spiked club");
	// HumanA bob("Bob", club);
	// bob.attack();
	// club.setType("some other type of club");
	// bob.attack();
	
	Weapon club = Weapon("crude spiked club");
	std::cout << club.getType() << std::endl;

	HumanB jim("Jim");
	jim.set_weapon(club);
	jim.attack();
	club.setType("some other type of club");
	
	jim.attack();

	return 0;
}