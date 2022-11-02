/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:44:08 by smuramat          #+#    #+#             */
/*   Updated: 2022/10/31 22:24:23 by smuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
  this->fixed_num = 0;
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &a)
{
  fixed_num = a.fixed_num;
  std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& a)
{
  if (this != &a)
    fixed_num = a.fixed_num;
  std::cout << "Copy assignment operator called" << std::endl;
  return (*this);
}

Fixed::~Fixed()
{
  std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
  std::cout << "getRawBits member function called" << std::endl;
  return (this->fixed_num);
}

void Fixed::setRawBits( int const raw )
{
  this->fixed_num = raw;
}
