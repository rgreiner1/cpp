/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 12:14:05 by rgreiner          #+#    #+#             */
/*   Updated: 2024/03/15 15:09:12 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
	std::string userinput;
	PhoneBook phonebook;
	Contact contact1;
	Contact contact2;
	Contact contact3;
	Contact contact4;
	Contact contact5;
	Contact contact6;
	Contact contact7;
	Contact contact8;
	while (1)
	{
		std::getline(std::cin, userinput);
		if (userinput == "EXIT")
			return (1);
		if (userinput == "ADD")
			PhoneBook::fill_info();
		//if (userinput == "SEARCH")
	}

	return 0;
}