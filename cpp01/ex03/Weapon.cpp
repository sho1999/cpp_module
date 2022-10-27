/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 22:04:16 by smuramat          #+#    #+#             */
/*   Updated: 2022/10/26 16:56:14 by smuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

	Weapon::Weapon(std::string type)
	{
		this->setType(type);
	}

	Weapon::~Weapon()
	{
	}

	void	Weapon::setType(std::string type)
	{
		this->type = type;
	}
	
	const std::string &Weapon::getType()
	{
		const std::string	&_type = this->type;
		return (_type);
	}