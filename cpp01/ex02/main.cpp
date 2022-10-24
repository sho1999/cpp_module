/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:34:54 by smuramat          #+#    #+#             */
/*   Updated: 2022/10/23 21:57:23 by smuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <iostream>

int main()
{
  std::string	str = "HI THIS IS BRAIN";
	std::string	*strPTR = &str;
	std::string	&strREF = str;

	std::cout << "[address]" << std::endl;
	std::cout << "&str    : " << &str << std::endl;
	std::cout << "strPTR  : " << strPTR << std::endl;
	std::cout << "&strREF : " << &strREF << std::endl;
	std::cout << std::endl;
	std::cout << "[value]" << std::endl;
	std::cout << "str     : " << str << std::endl;
	std::cout << "*strPTR : " << *strPTR << std::endl;
	std::cout << "strREF  : " << strREF << std::endl;
}