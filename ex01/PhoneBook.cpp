/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:46:19 by kbrener-          #+#    #+#             */
/*   Updated: 2024/10/17 09:42:27 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	this->older_contact = 0;
	this->nb_contact = 0;
	std::cout<<"PhoneBook constructor called"<<std::endl;
}

void	PhoneBook::add_contact(const Contact& contact) {
	if (this->nb_contact < 8)
	{
		this->contacts[this->nb_contact] = contact;
		this->nb_contact++;
	}
	else
	{
		std::cout<<"repertoire is full, the older contact\
			(index : "<<this->older_contact<<") will be removed"<<std::endl;
		std::cout<<"continue? (y/n)"<<std::endl;
		std::string	answer;
		std::cin>>answer;
		if (answer == "y") {
			this->contacts[this->older_contact] = contact;
			if (this->older_contact < 7)
				this->older_contact++;
			else
				this->older_contact = 0;
		}
	}
}
void	PhoneBook::show_contacts(void) {
	print_title();
	for (int i = 0; i < this->nb_contact; ++i)
		contacts[i].print_contact(i);
}

void	PhoneBook::search(void) {
	if (this->nb_contact == 0) {
		std::cout<<"no contact in the phonebook"<<std::endl;
		return;
	}
	show_contacts();
	std::cout<<"please enter the index number of the contact you want to see"<<std::endl;
	int	index = 9;
	if (!(std::cin>>index)) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout<<"wrong format"<<std::endl;
	}
	else {
		if (index < this->nb_contact)
			this->contacts[index].print_info_contact();
		else
			std::cout<<"wrong format, the number should be between 0 and "\
			<<this->nb_contact - 1<<std::endl;
	}
}

PhoneBook::~PhoneBook(void) {
	std::cout<<"PhoneBook destructor called"<<std::endl;
}
