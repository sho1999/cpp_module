/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:06:18 by smuramat          #+#    #+#             */
/*   Updated: 2022/10/30 14:40:57 by smuramat         ###   ########.fr       */
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
	void	move_index();
public:
	size_t	count;
	void	add();
	void	search();
};

#endif