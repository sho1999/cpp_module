/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:58:08 by smuramat          #+#    #+#             */
/*   Updated: 2022/10/23 16:59:53 by smuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string info_index[5] = {
	"First name",
	"Family name",
	"Nickname",
	"Phone number",
	"Secret"}; 

bool	Contact::make_contact()
{
	Contact tmp_contact;
  std::string  tmp_str;
	size_t	i;

	for (i = 0; i < 5; i++)
	{
		std::cout << "input :" << info_index[i] << std::endl;
		getline(std::cin, this->info_tmp[i]);
	}
	for (i = 0; i < 5; i++)
	{
		if (this->info_tmp[i].empty())
		{
			std::cout << "Error: " << info_index[i] << " is Empty" << std::endl;
			return (false);
		}
	}
	for (i = 0; i < 5; i++)
		this->info[i] = this->info_tmp[i];
	for (i = 0; i < 5; i++)
		std::cout << info_index[i] << ": " << this->info[i] << std::endl;
	return (true);
}

void Contact::set_mini_contact(std::string info)
{
	size_t	i;

	if (info.size() > 10)
	{
		for (i = 0; i < 9; i++)
			std::cout << info[i];
		std::cout << ".";
	}
	else
	{
		for (i = 10 - info.size(); i > 0; i--)
			std::cout << " ";
		std::cout << info;
	}
}

void Contact::show_mini_contact(int index)
{
	std::cout << "|" << "         " << std::to_string(index);
	std::cout << "|"; this->set_mini_contact(this->info[0]);
	std::cout << "|"; this->set_mini_contact(this->info[1]);
	std::cout << "|"; this->set_mini_contact(this->info[2]);
	std::cout << "|" << std::endl;
}

void	Contact::show_contact(int index)
{
	std::cout << "      index | " << std::to_string(index); std::cout << std::endl;
	std::cout << " first name | " << this->info[0] << std::endl;
	std::cout << "family name | " << this->info[1] << std::endl;
	std::cout << "   nickname | " << this->info[2] << std::endl;
	std::cout << "      phone | " << this->info[3] << std::endl;
	std::cout << "     secret | " << this->info[4] << std::endl;
}
