/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:00:31 by vodebunm          #+#    #+#             */
/*   Updated: 2024/11/19 11:28:17 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSCONTACT_HPP
#define CLASSCONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Contact{
	private:
	std::string initialName;
	std::string lastName;
	std::string nickName;
	std::string mobileNumber;
	std::string darkSecret;
	
	public:
	//Setters
	void Contact::setInitialName(const std::string& initialName);
	void Contact::setLastName(const std::string& lastName);
	void Contact::setNickName(const std::string& nickName);
	void Contact::setMobileNumber(const std::string& mobileNumber);
	void Contact::setDarkSecret(const std::string& secret);

	//Getters
	std::string getInitialName() const;
	std::string getLastName() const;
	std::string getNickName() const;
	std::string getMobileNumber() const;
	std::string getdarkSecret() const;
};

#endif