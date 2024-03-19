/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:43:25 by rgreiner          #+#    #+#             */
/*   Updated: 2024/03/19 18:10:16 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#include "iostream"
#include "string"
#include "sstream"
#include "Contact.hpp"


class PhoneBook
{
private:
	/* data */
public:
	PhoneBook(void);
	~PhoneBook(void);
	void	fill_info(Contact *contact, int i);
	void	print_phonebook(Contact *contact, int len);
};

#endif