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

void	FtInitFieldsNames(std::string arr[])
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
	Contact		phonebook[11];
	int			j = 0;

	FtInitFieldsNames(fieldsNames);
	std::cout << "Phonebook 22000 by drafe." << std::endl;
	while (userInput != "EXIT" && (j <= 8))
	{
		if (userInput == "ADD")
		{
				std::cout << "Contact " << (j + 1) << "/8. " << std::endl;
				for (int i = 0; i < 11; ++i)
				{
					std::cout << "Please, enter your " << fieldsNames[i] << ".\n";
					std::cin >> userInput;
					if (userInput == "EXIT")
						return (EXIT_SUCCESS);
					phonebook[j].setField(userInput, i);
				}
				j++;
		}
		else if (userInput == "SEARCH")
		{

		}
		else
		{
			std::cout << "Enter one of the following commands please - ADD / SEARCH / EXIT." << std::endl;
			std::cin >> userInput;
		}
	}
	return (EXIT_SUCCESS);
}
