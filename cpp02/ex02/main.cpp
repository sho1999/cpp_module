/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:41:06 by smuramat          #+#    #+#             */
/*   Updated: 2022/11/03 12:16:05 by smuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void )
{
  // Fixed a( 3 );
  // // Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
  // Fixed c( 2 );
  
  // std::cout << "Using comparison operators" << std::endl;
	// std::cout << "a > c is " << (a > c) << std::endl;
	// std::cout << "a < c is " << (a < c) << std::endl;
	// std::cout << "a >= c is " << (a >= c) << std::endl;
	// std::cout << "a <= c is " << (a <= c) << std::endl;
	// std::cout << "a == c is " << (a == c) << std::endl;
	// std::cout << "a != c is " << (a != c) << std::endl << std::endl;

  // std::cout << "Using binary operators" << std::endl;
	// std::cout << "c + a = " << (c + a) << std::endl;
	// std::cout << "c - a = " << (c - a) << std::endl;
	// std::cout << "c * a = " << (c * a) << std::endl;
	// std::cout << "c / a = " << (c / a) << std::endl << std::endl;

	// std::cout << "Using increment decrement" << std::endl;
	// std::cout << "a = " << a << std::endl;
	// std::cout << "++a = " << --a << std::endl;
	// std::cout << "a = " << a << std::endl;
	// std::cout << "a++ = " << a-- << std::endl;
	// std::cout << "a = " << a << std::endl << std::endl;

	// std::cout << "Using own max min func" << std::endl;
	// std::cout << "max(a, c) = " << Fixed::max(a, c) << std::endl;
	// std::cout << "min(a, c) = " << Fixed::min(a, c) << std::endl;
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
return 0;
}
