/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:30:23 by kbrener-          #+#    #+#             */
/*   Updated: 2024/10/17 10:07:22 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	print_title(void) {
	std::string	title = "|*****index|First_Name|*Last_Name|**Nickname|";
	std::cout<<title<<std::endl;
}

std::string	get_format(std::string info) {
	std::string	format;
	if (info.length() >= 10) {
		format = info.substr(0, 9);
		format.append(1, '.');
	}
	else {
		int	nb_star = 10 - info.length();
		format.insert(0, nb_star, '*');
		format.insert(nb_star, info);
	}
	return (format);
}

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
