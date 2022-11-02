/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:44:08 by smuramat          #+#    #+#             */
/*   Updated: 2022/11/02 21:44:43 by smuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
  this->fixed_point_num = 0;
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
  this->fixed_point_num = num << this->fractional_bits;
  std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num)
{
  int power = pow(2, this->fractional_bits);
  this->fixed_point_num = roundf(num * power);
  std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &a)
{
  fixed_point_num = a.fixed_point_num;
  std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& a)
{
  if (this != &a)
    fixed_point_num = a.fixed_point_num;
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
  return (this->fixed_point_num);
}

void Fixed::setRawBits( int const raw )
{
  this->fixed_point_num = raw;
}

float Fixed::toFloat( void ) const
{
  int		power = pow(2, this->fractional_bits);
	float	result = (float)this->fixed_point_num / power;
	return (result);
}

int Fixed::toInt( void ) const
{
  return (this->fixed_point_num >> this->fractional_bits);
}

std::ostream& operator<<( std::ostream& ostr, const Fixed& instance )
{
  ostr << instance.toFloat();
	return (ostr);
}
