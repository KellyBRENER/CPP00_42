/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:46:19 by kbrener-          #+#    #+#             */
/*   Updated: 2024/10/11 11:17:16 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	this->older_contact = 0;
	this->nb_contact = 0;
	std::cout<<"PhoneBook constructor called"<<std::endl;
}

void	PhoneBook::add_contact(const Contact& new) {
	if (this->nb_contact < 7)
	{
		this->nb_contact++;
		this->contacts[this->nb_contact] = new;
	}
	else
	{
		std::cout<<"repertoire is full, the older contact : "<<this->contacts[this->older_contact]->First_Name<<" "<<this->contacts[this->older_contact]->Last_Name<<" will be removed"<<std::endl;
		std::cout<<"continue? (y/n)"<<std::endl;
		std::string	answer;
		std::cin>>answer;
		if (answer == "y") {
			this->contacts[this->older_contact] = new;
			if (this->older_contact < 7)
				this->older_contact++;
			else
				this->older_contact = 0;
		}
}
void	PhoneBook::show_contacts(void) {
	print_title();
	for (int i = 0; i < this->nb_contact; ++i)
		print_contact(this->contacts[i]);
}
void	PhoneBook::search(void) {
	show_contacts(this);
	std::cout<<"please enter the index number of the contact you want to see"<<std::endl;
	int	index;
	std::cin>>index;
	if (index < this->nb_contact)
		print_info_contact(this->contacts[index]);
	else {
		std::cout<<"wrong format, please enter a number between 0 and "<<this->nb_contact<<" or anything else to quit SEARCH"<<std::endl;
		std::cin>>index;
		if (index < this->nb_contact)
			print_info_contact(this->contacts[index]);
		else
			return;
	}
	return;
}

PhoneBook::~PhoneBook(void) {
	std::cout<<"destructor called"<<std::endl;
}
