/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhonebook.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:00:14 by vodebunm          #+#    #+#             */
/*   Updated: 2024/11/19 16:36:00 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "ClassContact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook{
	private:
	Contact max_contact[8];
	int oldest_contact;
	int contact_counter;
	std::string PhoneBook::str_truncate(const std::string &str) const;
	void PhoneBook::displayContactDetails(int index) const;
	
	public:
	PhoneBook();//to implement
	void add_to_contact();
	void search_for_contact() const;
};

#endif
