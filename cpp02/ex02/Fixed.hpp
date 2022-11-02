/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:41:25 by smuramat          #+#    #+#             */
/*   Updated: 2022/11/02 22:31:22 by smuramat         ###   ########.fr       */
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
  Fixed operator+( const Fixed& ) const;
  Fixed operator-( const Fixed& ) const;
  Fixed operator*( const Fixed& ) const;
  Fixed operator/( const Fixed& ) const;
};

std::ostream	&operator<<( std::ostream&, const Fixed& );

