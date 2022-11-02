/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 20:08:00 by smuramat          #+#    #+#             */
/*   Updated: 2022/10/29 19:05:58 by smuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

static	char **make_arr(std::string file_path, size_t count_line)
{
	char	**lines;
	char	*_line;
	std::string	line;

	std::cout << "size : " << count_line << std::endl;
	lines = new char *[count_line + 1];
	lines[count_line] = NULL;
	std::ifstream file(file_path);
	for (size_t i = 0; i < count_line; i++)
	{
		std::getline( file, line );
		_line = new char[line.size() + 1];
		_line[line.size()] = '\0';
		for (size_t j = 0; j < line.size(); j++)
			_line[j] = line[j];
		lines[i] = _line;
	}
	return (lines);
}

void Replace::set( char **argv )
{
	this->lines = make_arr(std::string(argv[1]), this->count_line);
	this->filename = std::string(argv[1]);
	this->search = std::string(argv[2]);
  this->repl = std::string(argv[3]);
}

static char *cast_char_ptr(std::string line)
{
	char *rtn_arr;
	
	rtn_arr = new char[line.size() + 1];
	rtn_arr[line.size()] = '\0';

	for (size_t i = 0; i < line.size(); i++)
		rtn_arr[i] = line[i];
	return (rtn_arr);
}

void Replace::replace( void )
{
	std::string	tmp_line;
	char *rtn_line;
	size_t	index;//intmax以上の文字列が来た時の対応
	
	for (size_t i = 0; i < this->count_line; i++)
	{
		tmp_line = std::string(this->lines[i]);
		delete this->lines[i];
		while (true)
		{
			index = tmp_line.find(this->search);
			if (index == std::string::npos)
				break ;
			else
			{
				tmp_line.erase(index, this->search.size());
				tmp_line.insert(index, this->repl);
			}
		}
		rtn_line = cast_char_ptr(tmp_line);
		this->lines[i] = rtn_line;
	}
}

static std::string replace_filename(std::string old)
{
	size_t	old_path_len;
	size_t	index;

	index = old.find_last_of('.');
	if (index == std::string::npos)
		return (old + ".replace");
	else
	{
		old_path_len = old.size();
		old.erase(index, old_path_len - index);
		old.insert(index, ".replace");
	}
	return (old);
}

void	Replace::output_file( void )
{
	std::string	filename;

	filename = replace_filename(this->filename);
	std::ofstream file(filename);
	for (size_t i = 0; i < this->count_line; i++)
	{
		file << this->lines[i];
		if (i != this->count_line - 1)
			file << std::endl;
	}
	for (size_t i = 0; i < this->count_line; i++)
		delete this->lines[i];
	delete this->lines;
}