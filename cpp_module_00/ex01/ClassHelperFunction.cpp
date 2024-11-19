/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassHelperFunction.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:49:07 by vodebunm          #+#    #+#             */
/*   Updated: 2024/11/19 16:46:26 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassContact.hpp"
#include "ClassPhonebook.hpp"
#include <iostream>
#include <iomanip>
#include <string>

std::string PhoneBook::str_truncate(const std::string &str) const
{
	if (str.length()> 10)
	{
		return str.substr(0,9) + ".";
	}
	return(str);
}

void PhoneBook::displayContactDetails(int index) const
{
	std::cout<<"Intial Name"<<max_contact[index].getInitialName()<<std::endl;
	std::cout<<"Last Name"<<max_contact[index].getLastName()<<std::endl;
	std::cout<<"Nick Name"<<max_contact[index].getNickName()<<std::endl;
	std::cout<<"mobile Number"<<max_contact[index].getMobileNumber()<<std::endl;
	std::cout<<"Dark Secret"<<max_contact[index].getdarkSecret()<<std::endl;
}