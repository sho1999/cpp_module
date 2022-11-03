/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:25:06 by smuramat          #+#    #+#             */
/*   Updated: 2022/11/03 16:18:26 by smuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
	#define CLAPTRAP_HPP

#include <iostream>
#include <string.h>

class ClapTrap
{
private:
	std::string name;
	unsigned int	hitPoint;
	unsigned int	energyPoint;
	unsigned int	attackDamage;
public:
	ClapTrap(std::string name);
	~ClapTrap();
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	unsigned int	getAttackDamage( void ) const;
};


#endif