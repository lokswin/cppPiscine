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

std::string		Contact::getField( int fieldId ) const {

	if (fieldId >= 0 && fieldId <= 10)
		return (_allFields[fieldId]);
	return("BAD fieldId");
};

void	Contact::setField(std::string str, int fieldId) {

	if (fieldId >= 0 && fieldId <= 10)
		_allFields[fieldId] = str;
};