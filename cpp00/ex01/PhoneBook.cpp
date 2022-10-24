/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:06:15 by smuramat          #+#    #+#             */
/*   Updated: 2022/10/23 17:00:56 by smuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::add()
{
	if (this->count > 7)
	{
		Contact tmp_contact;
		if (tmp_contact.make_contact())
		{
			this->move_index();
			this->contacts[7] = tmp_contact;
			this->count++;
			std::cout << "Oldest contact was deleted" <<std::endl;
		}
	}
	else if (this->contacts[this->count].make_contact())
		this->count++;
}

void	PhoneBook::show_all()
{
	std::cout << "|     index|first_name|family_na.| nick_name|" << std::endl;
	for (size_t i = 0; i < this->count && i < 8; i++)
		this->contacts[i].show_mini_contact(i); std::cout << std::endl;
}

void	PhoneBook::search()
{
	std::string cmd;
	int		index;

	this->show_all();
	std::cout << "Enter index[0 ~ 7] " <<std::endl;
	getline(std::cin, cmd);
	index = atoi(cmd.c_str());
	if (index >= 0 && index <= 7)
		this->contacts[index].show_contact(index);
	else
		std::cout << "Error : [" << index << "] is wrong index" << std::endl;
}

void PhoneBook::move_index()
{
	for (size_t i = 0; i < 7; i++)
		this->contacts[i] = this->contacts[i + 1];
}