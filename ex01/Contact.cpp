/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:52:08 by kbrener-          #+#    #+#             */
/*   Updated: 2024/10/11 15:40:32 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact(void) {
	std::cout<<"Contact constructor called"<<std::endl;
}

void	Contact::add_info(void) {
	std::cout<<"enter the First_Name"<<std::endl;
	std::cin>>this->Firts_Name;
	std::cout<<"enter the Last_Name"<<std::endl;
	std::cin>>this->Last_Name;
	std::cout<<"enter the Nickname"<<std::endl;
	std::cin>>this->Nickname;
	std::cout<<"enter the Phone_Number"<<std::endl;
	std::cin>>this->Phone_Number;
	std::cout<<"enter the Darkest_Secret"<<std::endl;
	std::cin>>this->Darkest_Secret;
}

/*4col(index|first_name|last_name|nickname)
chaque col = 10 char, separe par |, texte aligne a droite, si texte trop long,
le tronquer et dernier carac = .*/
void	Contact::print_contact(int index) {
	std::string	line_to_print;
	char	buffer[50];

	std::sprintf(buffer, "%d", index);
	line_to_print = "|*********" + std::string(buffer) + "|" + \
		get_format(this->Firts_Name) + "|" + get_format(this->Last_Name) +\
		"|" + get_format(this->Nickname) + "|";
	std::cout<<line_to_print<<std::endl;
}

void	Contact::print_info_contact(void) {
	std::cout<<"First_Name : "<<this->Firts_Name<<std::endl;
	std::cout<<"Last_Name : "<<this->Last_Name<<std::endl;
	std::cout<<"Nick_Name : "<<this->Nickname<<std::endl;
	std::cout<<"Phone_Number : "<<this->Phone_Number<<std::endl;
	std::cout<<"Darkest_Secret : "<<this->Darkest_Secret<<std::endl;
}

Contact::~Contact(void) {
	std::cout<<"Contact destructor called"<<std::endl;
}
