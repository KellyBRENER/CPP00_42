/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:31:45 by kbrener-          #+#    #+#             */
/*   Updated: 2024/10/09 15:43:31 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

std::string	to_uppercase(const std::string &input) {
	std::string	result = input;
	for (std::string::size_type i = 0; i < result.length(); ++i) {
		result[i] = std::toupper(static_cast<unsigned char>(result[i]));
	}
	return result;
}

int	main(int argc, char **argv) {
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 1;
	}
	for (int i = 1; argv[i]; ++i)
	{
		std::string	input = argv[i];
		std::string	uppercase_string = to_uppercase(input);
		std::cout << uppercase_string;
	}
	std::cout << std::endl;
	return 0;
}
