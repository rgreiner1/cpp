/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:28:06 by rgreiner          #+#    #+#             */
/*   Updated: 2024/03/19 18:22:53 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void){
	std::cout << "Constructor called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void){
	std::cout << "Destructor called" << std::endl;
	return ;
}

void    PhoneBook::fill_info(Contact *contact, int i){
	std::cout << "Awaiting input first_name" << std::endl;
	if (std::getline(std::cin, contact[i].first_name).eof() != 0)
		return ;
	std::cout << "Awaiting input last_name" << std::endl;
	if (std::getline(std::cin, contact[i].last_name).eof() != 0)
		return ;
	std::cout << "Awaiting input nickname" << std::endl;
	if (std::getline(std::cin, contact[i].nickname).eof() != 0)
		return ;
	std::cout << "Awaiting input phone_number" << std::endl;
	if (std::getline(std::cin, contact[i].phone_number).eof() != 0)
		return ;
	std::cout << "Awaiting input darkest secret" << std::endl;
	if (std::getline(std::cin, contact[i].darkest_secret).eof() != 0)
		return ;
	return ;
}

void    PhoneBook::print_phonebook(Contact *contact, int len){
	
	int i;

	i = 1;
	std::cout << "      Index|First name| Last name|  Nickname" << std::endl;
	std::cout << "____________________________________________" << std::endl;
    while(i <= len && i <= 8)
	{
		std::cout << i;
		std::cout << "|";
		std::cout << contact[i].first_name;
		std::cout << "|";
		std::cout << contact[i].last_name;
		std::cout << "|";
		std::cout << contact[i].nickname;
		std::cout << std::endl;
		i++;
  	}
	return ;
}