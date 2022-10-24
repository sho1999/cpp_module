/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:50:16 by smuramat          #+#    #+#             */
/*   Updated: 2022/10/23 16:58:36 by smuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
private:
	std::string	info[5];
	std::string	info_tmp[5];
	void	set_mini_contact(std::string info);
	void	set_contact(std::string info);
public:
	bool	make_contact();
	void	show_mini_contact(int index);
	void	show_contact(int index);
};

#endif
