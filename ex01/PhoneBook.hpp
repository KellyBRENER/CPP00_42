/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:01:59 by kbrener-          #+#    #+#             */
/*   Updated: 2024/10/11 17:27:12 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <cstdio>
#include <limits>

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

class Contact {
	public :
		Contact(void);
		~Contact(void);

		void	add_info(void);
		void	print_contact(int index);
		void	print_info_contact(void);
	private :
		std::string	Firts_Name;
		std::string	Last_Name;
		std::string	Nickname;
		std::string	Phone_Number;
		std::string	Darkest_Secret;
};

//repertoire
class PhoneBook {
	public :
		PhoneBook(void);
		~PhoneBook(void);
		void	add_contact(const Contact&	contact);
		void	search(void);
		void	show_contacts(void);
	private :
		Contact	contacts[8];
		int	older_contact;
		int	nb_contact;
};

void	print_title(void);
std::string	get_format(std::string info);

#endif

