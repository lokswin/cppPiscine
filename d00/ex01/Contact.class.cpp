/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <drafe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 15:40:42 by drafe             #+#    #+#             */
/*   Updated: 2020/03/11 15:40:42 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

bool	Contact::emptyContact() const {
	int	empty = 0;

	for(int i = 0; i < 11; ++i)
	{
		this->getField(i).empty() ? empty++ : 0;
	}
	return(empty == 10);
};

std::string	Contact::getField(int fieldId) const {

	if (fieldId >= 0 && fieldId <= 10)
		return (_allFields[fieldId]);
	return("BAD fieldId");
};

void		Contact::setField(std::string str, int fieldId) {

	if (fieldId >= 0 && fieldId <= 10)
		_allFields[fieldId] = str;
};

void		Contact::printAllFields(std::string arr[]) const {

	for(int i = 0; i < 11; ++i)
	{
		//std::cout.width(_allFields[i].length() + 1);
		std::cout.width(arr[i].length());
		std::cout << std::left << arr[i] << ": ";
		std::cout.width(_allFields[i].length());
		std::cout << std::right << _allFields[i] << std::endl;
	}
} 
