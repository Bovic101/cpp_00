/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:00:03 by vodebunm          #+#    #+#             */
/*   Updated: 2024/11/18 14:02:24 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClassPhonebook.hpp"

int main()
{
	//PhoneBook phone;// To implement
	std::string cmd;
	
	while (true)
	{
		std::cout<<"Enter a command to proceed(ADD, SEARCH, EXIT):";
		std::getline(std::cin, cmd);

		if (cmd =="ADD")
		{
			/* To do phone implementation */
		}
		else if (cmd == "SEARCH")
		{
			/* To do */
		}
		else if (cmd =="EXIT")
		{
			std::cout<<"Quiting phonebook....\n";
			break;
		}
		else
			std::cout<<"Invalid input command\n";
	}
	return(0);
}