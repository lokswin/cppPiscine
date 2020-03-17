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

class	Contact{

public:
	bool		emptyContact() const;
	std::string	getField(int fieldId) const;
	void		setField(std::string str, int fieldId);
	void		printAllFields(std::string arr[]) const;

private:
	std::string	_allFields[11];

};

#endif