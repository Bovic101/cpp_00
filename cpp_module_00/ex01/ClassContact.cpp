/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:00:35 by vodebunm          #+#    #+#             */
/*   Updated: 2024/11/18 13:35:11 by vodebunm         ###   ########.fr       */
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
void Contact::setMobileName(const std::string& mobileName)
{
	this->mobileName = mobileName;
}

void Contact::setDarkSecret(const std::string& secret)
{
	this->darkSecret = secret;
}