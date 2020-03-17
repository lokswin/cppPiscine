/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <drafe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 16:33:40 by drafe             #+#    #+#             */
/*   Updated: 2020/03/11 16:33:40 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include <sstream>
#include <string>

std::string	ftStrDot(std::string str)
{
	std::string	result;

	if (str.length() >= 10)
	{
		result = str.substr(0 , 9);
		result.push_back('.');
	}
	else
		return (str);
	
	return (result);
}

void		ftPrintAllContacts(Contact phoneBook[])
{
	std::string	tmp;

	for (int j = 0; j < 8; ++j)
	{
		if (!phoneBook[j].getField(0).empty())
		{
			std::cout << std::setw(12) << "| " << std::setw(10) << j << " |";
			for (int i = 0; i < 3; ++i)
			{
				tmp = ftStrDot(phoneBook[j].getField(i));
				std::cout<< ' ' << std::setw(10) << tmp << " |";
			}
			std::cout << std::endl;
		}
	}
}

void		ftSearchStart(Contact phoneBook[], std::string arr[])
{
	std::string userInput;
	int			contactId;

	std::cout << "List of contacts:\n";
	std::cout << std::setw(12) << "| " << std::setw(13) << "Index | ";
	std::cout << std::setw(10) << "First name | ";
	std::cout << std::setw(13) << "Last name | ";
	std::cout << std::setw(13) << "Nickname |\n";
	ftPrintAllContacts(phoneBook);
	std::cout << "Please enter contact index below to see more ";
	std::cout << "information about this person. [0 - 7]\n";
	std::cin >> userInput;
	if (userInput == "EXIT")
		exit(EXIT_SUCCESS);
	std::istringstream convertStrToNb(userInput);
	while (!(convertStrToNb >> contactId) || !(contactId >= 0 && contactId <= 7))
	{
		std::cout << "Error. Please enter contact index below to see more ";
		std::cout << "information about this person. [0 - 7]\n";
		std::cin >> userInput;
	}
	if (phoneBook[contactId].emptyContact())
		std::cout << "Empty";
	else
		phoneBook[contactId].printAllFields(arr);
}

void		ftInitFieldsNames(std::string arr[])
{
	arr[0] = "first name";
	arr[1] = "last name";
	arr[2] = "nickname";
	arr[3] = "login";
	arr[4] = "postal address";
	arr[5] = "email address";
	arr[6] = "phone number";
	arr[7] = "birthday date";
	arr[8] = "favorite meal";
	arr[9] = "underwear color";
	arr[10] = "darkest secret";
}

int		main(int ac, char **av)
{
	std::string	fieldsNames[11];
	std::string userInput;
	Contact		phonebook[8];
	int			contactId = 0;

	ftInitFieldsNames(fieldsNames);
	std::cout << "Phonebook 22000 by drafe.\n";
	while (userInput != "EXIT")
	{
		if (userInput == "ADD" && (contactId < 8))
		{
				std::cout << "Contact " << (contactId + 1) << "/8. \n";
				for (int i = 0; i < 11; ++i)
				{
					std::cout << "Please, enter your " << fieldsNames[i] << ":";
					std::cin >> userInput;
					if (userInput == "EXIT")
						return (EXIT_SUCCESS);
					phonebook[contactId].setField(userInput, i);
				}
				contactId++;
		}
		else if (userInput == "SEARCH")
		{
			ftSearchStart(phonebook, fieldsNames);
			userInput = "clear";
		}
		else if (contactId > 7)
		{
			std::cout << "Phone book is full! Use EXIT or SEARCH commands.\n";
			//std::cout << "Command doesn't exist.\n";
			//std::cout << "Enter one of the following commands please - ";
			//std::cout << "ADD / SEARCH / EXIT.\n";
		}
		std::getline(std::cin, userInput, '\n');
		//std::cin >> userInput;

	}
	return (EXIT_SUCCESS);
}
