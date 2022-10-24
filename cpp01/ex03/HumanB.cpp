/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 22:16:16 by smuramat          #+#    #+#             */
/*   Updated: 2022/10/23 22:16:30 by smuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

	void  HumanB::attack(std::string name)
	{
		std::cout << name << " attacks with their " << weapon.getType() <<std::endl;
	}