/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:41:06 by smuramat          #+#    #+#             */
/*   Updated: 2022/11/02 22:33:51 by smuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void )
{
  Fixed a(11);
  // Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
  Fixed c(11);
  
  std::cout << "Using comparison operators" << std::endl;
	std::cout << "a > c is " << (a > c) << std::endl;
	std::cout << "a < c is " << (a < c) << std::endl;
	std::cout << "a >= c is " << (a >= c) << std::endl;
	std::cout << "a <= c is " << (a <= c) << std::endl;
	std::cout << "a == c is " << (a == c) << std::endl;
	std::cout << "a != c is " << (a != c) << std::endl << std::endl;

  std::cout << "Using binary operators" << std::endl;
	std::cout << "c + a = " << (c + a) << std::endl;
	std::cout << "c - a = " << (c - a) << std::endl;
	std::cout << "c * a = " << (c * a) << std::endl;
	std::cout << "c / a = " << (c / a) << std::endl << std::endl;
}