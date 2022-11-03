/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:33:03 by smuramat          #+#    #+#             */
/*   Updated: 2022/11/03 16:08:03 by smuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): name(name)
{
  this->hitPoint = 10;
  this->energyPoint = 10;
  this->attackDamage = 2;
  std::cout << "constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
  std::cout << "destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
  if (this->energyPoint > 0 && this->hitPoint > 0)
  {
    std::cout << "ClapTrap " << this->name << 
    " attacks " << target <<", causing " << this->getAttackDamage() <<
    " points of damage!" << std::endl;
    this->energyPoint--;
    std::cout << "ClapTrap " << this->name << 
    "'s energy point is reduced : " << this->energyPoint << std::endl;
  }
  else
    std::cout << this->name << " can't attack cos No EP" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
  this->hitPoint -= amount;
  std::cout << "ClapTrap " << this->name << 
  " was hit with " << amount <<"-point attack. Now" <<
  this->name << "'s hit point is : " << this->hitPoint << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
  if (this->energyPoint > 0 && this->hitPoint > 0)
  {
    this->hitPoint += amount;
    std::cout << "ClapTrap " << this->name << 
    " was repaired " << amount <<"-point. " <<
    this->name << "'s hit point is : " << this->hitPoint << std::endl;
    this->energyPoint--;
  }
  else
    std::cout << this->name << " can't repair cos No EP" << std::endl;
}

unsigned int	ClapTrap::getAttackDamage() const
{
  return (this->attackDamage);
}
