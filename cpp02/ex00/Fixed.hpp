/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:41:25 by smuramat          #+#    #+#             */
/*   Updated: 2022/10/31 21:47:41 by smuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
private:
  int fixed_num;
  static const int  bits = 8;
public:
  Fixed();
  Fixed(const Fixed& a);
  Fixed& operator=(const Fixed& a);
  ~Fixed();
  int getRawBits( void ) const;
  void setRawBits( int const raw );
};
