/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:06:18 by smuramat          #+#    #+#             */
/*   Updated: 2022/10/23 12:14:45 by smuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <stdio.h>
#include "Contact.hpp"

class PhoneBook
{
private:
	Contact contacts[8];
	void	show_all();
public:
	size_t	count;
	void	add();
	void	search();
	void	move_index();
};

#endif