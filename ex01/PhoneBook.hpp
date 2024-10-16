/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:01:59 by kbrener-          #+#    #+#             */
/*   Updated: 2024/10/17 10:06:01 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "main.hpp"

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

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

#endif

