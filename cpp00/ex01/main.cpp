/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:16:48 by smuramat          #+#    #+#             */
/*   Updated: 2022/10/23 17:00:25 by smuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	PhoneBook phone_book;
	std::string cmd;
	bool		flag;

	flag = true;
	phone_book.count = 0;
	while (flag)
	{
		std::cout << "Please input command ADD SEARCH EXIT" << std::endl;
		std::cout << ">> ";
		std::getline(std::cin, cmd);
		if (std::cin.eof())
			break ;
		if (cmd == "ADD")
			phone_book.add();
		else if (cmd == "SEARCH")
			phone_book.search();
		else if (cmd == "EXIT")
		{
			std::cout << "exit" << std::endl;
			flag = false;
		}
	}
}
