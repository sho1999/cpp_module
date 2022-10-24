/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 17:09:39 by smuramat          #+#    #+#             */
/*   Updated: 2022/10/15 21:40:03 by smuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
  size_t  i;
  size_t  j;

  if (argc == 1)
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
  else
  {
    i = 1;
    while (argv[i])
    {
      j = 0;
      while (argv[i][j])
      {
        std::cout << (char)std::toupper(argv[i][j]);
        j++;
      }
      i++;
    }
    std::cout << std::endl;
  }

  return (0);
}