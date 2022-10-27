/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 22:16:34 by smuramat          #+#    #+#             */
/*   Updated: 2022/10/26 10:54:24 by smuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
private:
	std::string name;
	Weapon weapon;
public:
	HumanB(std::string name);
	~HumanB();
	void	attack();
	void	set_weapon(Weapon &weapon);
};
