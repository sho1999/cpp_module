/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:44:08 by smuramat          #+#    #+#             */
/*   Updated: 2022/11/03 12:17:11 by smuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	this->fixed_point_num = 0;
}

Fixed::Fixed(const int num)
{
	this->fixed_point_num = num << this->fractional_bits;
}

Fixed::Fixed(const float num)
{
	int power = pow(2, this->fractional_bits);
	this->fixed_point_num = roundf(num * power);
}

Fixed::Fixed(const Fixed &a)
{
	fixed_point_num = a.fixed_point_num;
}

Fixed& Fixed::operator=(const Fixed& a)
{
	if (this != &a)
		fixed_point_num = a.fixed_point_num;
	return (*this);
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits( void ) const
{
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

/* The 6 comparison operators: >, <, >=, <=, == and != */
bool  Fixed::operator>( const Fixed& instance) const
{
	return (this->getRawBits() > instance.getRawBits());
}

bool  Fixed::operator<( const Fixed& instance) const
{
	return (this->getRawBits() < instance.getRawBits());
}

bool  Fixed::operator>=( const Fixed& instance) const
{
	return (this->getRawBits() >= instance.getRawBits());
}

bool  Fixed::operator<=( const Fixed& instance) const
{
	return (this->getRawBits() <= instance.getRawBits());
}

bool  Fixed::operator==( const Fixed& instance) const
{
	return (this->getRawBits() == instance.getRawBits());
}

bool  Fixed::operator!=( const Fixed& instance) const
{
	return (this->getRawBits() != instance.getRawBits());
}

/* The 4 arithmetic operators: +, -, *, and / */
Fixed Fixed::operator+( const Fixed& instance )
{
	Fixed result;

	result.setRawBits(this->getRawBits() + instance.getRawBits());
	return (result);
}

Fixed Fixed::operator-( const Fixed& instance )
{
	Fixed result;

	result.setRawBits(this->getRawBits() - instance.getRawBits());
	return (result);
}

Fixed Fixed::operator*( const Fixed& instance )
{
	Fixed result;

	result.setRawBits((this->getRawBits() * instance.getRawBits()) >> this->fractional_bits);
	return (result);
}

Fixed Fixed::operator/( const Fixed& instance )
{
	Fixed result;

	result.setRawBits((this->getRawBits() * 1 << this->fractional_bits) / instance.getRawBits());
	return (result);
}

/* The 4 increment/decrement */

Fixed& Fixed::operator++()
{
	this->fixed_point_num++;
	return (*this);
}

Fixed& Fixed::operator--()
{
	this->fixed_point_num--;
	return (*this);
}

Fixed Fixed::operator++( int )
{
	Fixed old = *this;
	this->fixed_point_num++;
	return (old);
}

Fixed Fixed::operator--( int )
{
	Fixed old = *this;
	this->fixed_point_num--;
	return (old);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a.fixed_point_num > b.fixed_point_num)
		return (b);
	return(a);
}

const	Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a.fixed_point_num > b.fixed_point_num)
		return (b);
	return(a);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a.fixed_point_num > b.fixed_point_num)
		return (a);
	return(b);
}

const	Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.fixed_point_num > b.fixed_point_num)
		return (a);
	return(b);
}
