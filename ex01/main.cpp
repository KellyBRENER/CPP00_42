/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:30:23 by kbrener-          #+#    #+#             */
/*   Updated: 2024/10/11 15:53:27 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void) {
	PhoneBook	repertoire;
	std::string	command;
	std::cout<<"enter a command (ADD, SEARCH or EXIT)"<<std::endl;
	while (std::cin>>command) {
		if (command == "ADD") {
			Contact	Contact;
			Contact.add_info();
			repertoire.add_contact(Contact);
		}
		else if (command == "SEARCH")
			repertoire.search();
		else if (command == "EXIT")
			return 0;
		else
			std::cout<<"only three command allowed : ADD, SEARCH or EXIT"<<std::endl;
		std::cout<<"enter a command (ADD, SEARCH or EXIT)"<<std::endl;
	}
}
