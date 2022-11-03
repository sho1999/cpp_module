/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:41:25 by smuramat          #+#    #+#             */
/*   Updated: 2022/11/03 11:49:50 by smuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
private:
	int fixed_point_num;
	static const int   fractional_bits = 8;
public:
	Fixed();
	Fixed(const int num);
	Fixed(const float num);
	Fixed(const Fixed& a);
	Fixed& operator=(const Fixed& a);
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
	
	bool  operator>( const Fixed& ) const;
	bool  operator<( const Fixed& ) const;
	bool  operator>=( const Fixed& ) const;
	bool  operator<=( const Fixed& ) const;
	bool  operator==( const Fixed& ) const;
	bool  operator!=( const Fixed& ) const;
	Fixed operator+( const Fixed& );
	Fixed operator-( const Fixed& );
	Fixed operator*( const Fixed& );
	Fixed operator/( const Fixed& );
	Fixed& operator++();
	Fixed& operator--();
	Fixed operator++( int );
	Fixed operator--( int );
	static				Fixed& min(Fixed& a, Fixed& b);
	static const	Fixed& min(const Fixed& a, const Fixed& b);
	static				Fixed& max(Fixed& a, Fixed& b);
	static const	Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream	&operator<<( std::ostream&, const Fixed& );

