/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:00:35 by vodebunm          #+#    #+#             */
/*   Updated: 2024/11/19 11:34:51 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassContact.hpp"

//Setter definitions
void Contact::setInitialName(const std::string& initialName)
{
	this->initialName=initialName;
}
void Contact::setLastName(const std::string& lastName)
{
	this->lastName = lastName;
}
void Contact::setNickName(const std::string& nickName)
{
	this->nickName = nickName;
}
void Contact::setMobileNumber(const std::string& mobileNumber)
{
	this->mobileNumber = mobileNumber;
}

void Contact::setDarkSecret(const std::string& secret)
{
	this->darkSecret = secret;
}

//Getter definition
std::string Contact::getInitialName()const
{
	return initialName;
}

std::string Contact::getLastName()const
{
	return lastName;
}

std::string Contact::getNickName()const
{
	return nickName;
}
std::string Contact::getMobileNumber()const
{
	return mobileNumber ;
}
std::string Contact::getdarkSecret()const
{
	return darkSecret ;
}
