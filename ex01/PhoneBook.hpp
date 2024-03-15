/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:43:25 by rgreiner          #+#    #+#             */
/*   Updated: 2024/03/15 15:16:38 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#include "iostream"
#include "string"
#include "sstream"


class PhoneBook
{
private:
	/* data */
public:
	PhoneBook(void);
	~PhoneBook(void);
	void	fill_info();
};

#endif