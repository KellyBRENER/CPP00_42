/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 10:06:39 by kbrener-          #+#    #+#             */
/*   Updated: 2024/10/11 12:17:07 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	print_title(void) {

}

void	get_format(std::string info) {
	std::string	format;
	if (info.length() >= 10)
		format = info.substr(0, 9);
	else {
		int	nb_star = 10 - info.length();
		format.insert(0, nb_star, '*');
		format.insert(nb_star, info);
	}
}

/*4col(index|first_name|last_name|nickname)
chaque col = 10 char, separe par |, texte aligne a droite, si texte trop long,
le tronquer et dernier carac = .*/
void	Contact::print_contact(void) {
	std::string	line_to_print;
	int	i;

	i = 0;
	line_to_print = "|********|" + get_format(this->Firts_Name)
		+ get_format(this->Last_Name) + get_format(this->Nickname) + "|";
}

void	Contact::print_info_contact(void) {
	std::cout<<"First_Name : "<<this->Firts_Name<<std::endl;
	std::cout<<"Last_Name : "<<this->Last_Name<<std::endl;
	std::cout<<"Nick_Name : "<<this->Nickname<<std::endl;
	std::cout<<"Phone_Number : "<<this->Phone_Number<<std::endl;
	std::cout<<"Darkest_Secret : "<<this->Darkest_Secret<<std::endl;
}
