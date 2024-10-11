/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 10:06:39 by kbrener-          #+#    #+#             */
/*   Updated: 2024/10/11 15:12:46 by kbrener-         ###   ########.fr       */
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
