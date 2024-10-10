/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:52:08 by kbrener-          #+#    #+#             */
/*   Updated: 2024/10/10 16:25:56 by kbrener-         ###   ########.fr       */
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
	std::cout<<"enter the Nickname"<<std::endl;
	std::cin>>this->Nickname;
	std::cout<<"enter the Phone_Number"<<std::endl;
	std::cin>>this->Phone_Number;
	std::cout<<"enter the Darkest_Secret"<<std::endl;
	std::cin>>this->Darkest_Secret;
}

Contact::~Contact(void) {
	std::cout<<"Contact destructor called"<<std::endl;
}
