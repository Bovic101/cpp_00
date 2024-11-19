/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhonebook.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:00:26 by vodebunm          #+#    #+#             */
/*   Updated: 2024/11/19 17:25:52 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassPhonebook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() : oldest_contact(0), contact_counter(0) {}

void PhoneBook::add_to_contact() {
    Contact newEntry;
    std::string input;

    std::cout << "Enter Initial/First Name: ";
    while (std::getline(std::cin, input) && input.empty()) 
	{
        std::cout << "First Name is compulsory. Retype: ";
    }
    newEntry.setInitialName(input);

    std::cout << "Enter Last Name: ";
    while (std::getline(std::cin, input) && input.empty()) 
	{
        std::cout << "Last Name is compulsory. Retype: ";
    }
    newEntry.setLastName(input);

    std::cout << "Enter Nickname: ";
    while (std::getline(std::cin, input) && input.empty()) 
	{
        std::cout << "Nickname is compulsory. Retype: ";
    }
    newEntry.setNickName(input);

    std::cout << "Enter Mobile Number: ";
    while (std::getline(std::cin, input) && input.empty()) 
	{
        std::cout << "Mobile Number is compulsory. Retype: ";
    }
    newEntry.setMobileNumber(input);

    std::cout << "Enter Dark Secret: ";
    while (std::getline(std::cin, input) && input.empty()) 
	{
        std::cout << "Dark Secret is compulsory. Retype: ";
    }
    newEntry.setDarkSecret(input);

    if (contact_counter < 8) 
	{
        max_contact[contact_counter++] = newEntry;
    } 
	else 
	{
        max_contact[oldest_contact] = newEntry;
        oldest_contact = (oldest_contact + 1) % 8;
    }
}

void PhoneBook::search_for_contact() const 
{
    int i;
    int index;
    if (contact_counter == 0) {
        std::cout << "No contacts to display." << std::endl;
        return;
    }
	
    std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "Initial Name" << "|";
    std::cout << std::setw(10) << "Last Name" << "|";
    std::cout << std::setw(10) << "Nick Name" << std::endl;
	
    i = 0;
    while (i < contact_counter)
    {
        std::cout << std::setw(10) << i << "|";
        std::cout << std::setw(10) << str_truncate(max_contact[i].getInitialName()) << "|";
        std::cout << std::setw(10) << str_truncate(max_contact[i].getLastName()) << "|";
        std::cout << std::setw(10) << str_truncate(max_contact[i].getNickName()) << std::endl;
        i++;
    }
    
    std::cout << "Enter the index of the contact to view details and enter 0 to exit: ";
    if (!(std::cin >> index) || index < 0 || index >= contact_counter)
    {
        std::cin.clear(); // Clear the input buffer
        //std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid index." << std::endl;
        return;
    }
    std::cin.ignore();  // Ensure no lingering characters in the input buffer
    displayContactDetails(index);  // Call your contact details display function
}
