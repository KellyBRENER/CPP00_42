/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:01:59 by kbrener-          #+#    #+#             */
/*   Updated: 2024/10/11 11:21:32 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>
#include <vector>

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

class Contact {
	public :
		Contact(void);
		~Contact(void);

		void	new(void);
		std::string	get_info(std::string& info);
		void	print_contact(void);
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
		void	add_contact(const Contact&	new);
		void	search(void);
		void	show_contacts(void);
	private :
		Contact	contacts[8];
		int	older_contact;
		int	nb_contact;
};

#endif

