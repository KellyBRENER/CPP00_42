/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:52:08 by kbrener-          #+#    #+#             */
/*   Updated: 2024/10/10 16:05:39 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact(void) {
	std::cout<<"Contact constructor called"<<std::endl;
}

void	Contact::new(void) {
	std::cout<<"enter the First_Name"<<std::endl;
	std::cin>>this->First_Name;
	std::cout<<"enter the Last_Name"<<std::endl;
	std::cin>>this->Last_Name;
	std::cout<<"enter the Phone_Number"<<std::endl;
	std::cin>>this->Phone_Number;
	std::cout<<"enter the Address"<<std::endl;
	std::cin>>this->Address;
	std::cout<<"enter the Mail"<<std::endl;
	std::cin>>this->Mail;
	std::cout<<"enter the Function"<<std::endl;
	std::cin>>this->Function;
}

Contact::~Contact(void) {
	std::cout<<"Contact destructor called"<<std::endl;
}
