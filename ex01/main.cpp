/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:30:23 by kbrener-          #+#    #+#             */
/*   Updated: 2024/10/10 16:07:47 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void) {
	PhoneBook	repertoire;
	std::string	command;
	std::cout<<"enter a command (ADD, SEARCH or EXIT)"<<std::endl;
	std::cin>>command
	while (std::cin>>command) {
		if (command == "ADD") {
			Contact	Contact;
			Contact.new();
			repertoire.add_contact(Contact);
		}
		else if (command == "SEARCH")
		else if (command == "EXIT")
		else {
			std::cout<<"only three command allowed : ADD, SEARCH or EXIT"<<std::endl;
		}
	}
}
