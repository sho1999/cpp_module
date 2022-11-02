/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 19:59:25 by smuramat          #+#    #+#             */
/*   Updated: 2022/10/29 19:06:10 by smuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

// __attribute__((destructor))
// static void destructor() {
//     system("leaks -q ex03_out");
// }

std::ifstream init_check(int argc, char **argv)
{
  std::string file_tmp;

  if (argc != 4)
  {
    std::cout << "Usage: ./ex4_out <filename> <search_srt> <replace_str>" << std::endl;
    std::exit(1);
  }
  if (strlen(argv[2]) == 0)
  {
    std::cout << "NO SEARCH_STR" << std::endl;
    std::exit(1);
  }
  if (std::string(argv[2]) == std::string(argv[3]))
  {
    std::cout << "SAME STRING" << std::endl;
    std::exit(1);
  }
  file_tmp = std::string(argv[1]);
  std::ifstream file(file_tmp); 
  if (!file) {
    std::cerr << "Failure to open file" << std::endl;
    std::exit(1);
  }
  return (file);
}

static size_t countLine( std::ifstream &file )
{   
  size_t i = 0;
  
  std::string line;
	while( true )
	{ 
		std::getline( file, line );
		i++;
		if( file.eof() )
			break;
	}
	return i;
}

int main(int argc, char **argv)
{
  Replace replace;
  std::ifstream file;
  
  file = init_check(argc, argv);
	replace.count_line = countLine( file );
	replace.set( argv );
  replace.replace();
  replace.output_file();
}