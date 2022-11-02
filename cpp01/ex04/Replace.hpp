/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 22:38:52 by smuramat          #+#    #+#             */
/*   Updated: 2022/10/29 16:28:32 by smuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
	#define REPLACE_HPP

#include <fstream>
#include <iostream>
#include <string>

class Replace
{
private:
	std::string	filename;
	std::string	search;
	std::string	repl;
	char	**lines;
public:
	size_t	count_line;
	void	set( char **argv );
	void	replace( void );
	void	output_file();
};

#endif
