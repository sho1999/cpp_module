/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 21:13:46 by smuramat          #+#    #+#             */
/*   Updated: 2022/10/30 13:41:59 by smuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

static size_t check_status(std::string status)
{
  size_t  status_num;

  if (status == "DEBUG")
    status_num = 1;
  else if (status == "INFO")
    status_num = 2;
  else if (status == "WARNING")
    status_num = 3;
  else if (status == "ERROR")
    status_num = 4;
  else
    status_num = 5;
  return (status_num);
}

int main(int argc, char **argv)
{
  std::string complain;
  size_t  status_num;
  Harl  harl;

  if (argc != 2)
  {
    std::cout << "usage: ./harlFilter <DEBUG> or <INFO> or <WARNING> or <ERROR>" << std::endl;
    exit(1);
  }
  status_num = check_status(std::string(argv[1]));
  switch (status_num) {
		case 1:
			harl.complain("DEBUG");
		case 2:
			harl.complain("INFO");
    case 3:
      harl.complain("WARNING");
    case 4:
      harl.complain("ERROR");
		default:
			break;
	}
}