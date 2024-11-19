/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:00:03 by vodebunm          #+#    #+#             */
/*   Updated: 2024/11/19 17:29:16 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClassPhonebook.hpp"
#include "ClassPhonebook.hpp"

int main()
{
	PhoneBook phone;
	std::string cmd;
	
	while (true)
	{
		std::cout<<"Enter a command to proceed(ADD, SEARCH, EXIT):";
		std::getline(std::cin, cmd);

		if (cmd =="ADD")
		{
			phone.add_to_contact();
		}
		else if (cmd == "SEARCH")
		{
			phone.search_for_contact();
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