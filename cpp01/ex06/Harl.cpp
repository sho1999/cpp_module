/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuramat <smuramat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 21:16:21 by smuramat          #+#    #+#             */
/*   Updated: 2022/10/30 13:05:32 by smuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(/* args */)
{
}

Harl::~Harl()
{
}

std::string complaints[4] = {
	"DEBUG",
	"INFO",
	"WARNING",
	"ERROR"
}; 
	
void Harl::complain( std::string level )
{
	//complainの外では各要素にアクセスできないのでここで宣言
	void (Harl::*FuncPtrArray[])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	for (size_t i = 0; i < 4; i++)
	{
		void (Harl::*selectedFunc)(void) = FuncPtrArray[i];
		if (level == complaints[i])
		//どのインスタンスにある関数を呼び出すか決めるためにthis->をつける
			(this->*selectedFunc)();
	}
	
}

void Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double";
	std::cout << "-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money.";
	std::cout << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}