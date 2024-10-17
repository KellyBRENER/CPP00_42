/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 09:39:09 by kbrener-          #+#    #+#             */
/*   Updated: 2024/10/17 10:06:20 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

#ifndef CONTACT_H
#define CONTACT_H

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

#endif
