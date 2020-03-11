/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <drafe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 15:40:58 by drafe             #+#    #+#             */
/*   Updated: 2020/03/11 15:40:58 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
#define	CONTACT_CLASS_HPP
#include <iostream>
#include <string>
#include <iomanip>

/*
first name
last name
nickname
login
postal address
email address
phone number
birthday date
favorite meal
underwear color
darkest secret
*/

class	Contact{

public:
	std::string	getField( int fieldId ) const;
	void		setField( std::string str, int fieldId );

private:
	std::string	_allFields[11];

};

#endif