/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:12:13 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/08 11:23:49 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void) {
	std::string str = "HI STHIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "Address of str (&str) : " << std::endl;
	std::cout << &str << std::endl;
	std::cout << "Address in stringPTR (stringPTR) : " << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << "Address in stringREF (&stringREF) : " << std::endl;
	std::cout << &stringREF << std::endl << std::endl;
	std::cout << "Value of str (str) : " << std::endl;
	std::cout << str << std::endl;
	std::cout << "Value pointed in stringPTR (*stringPTR) : " << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << "Value pointed in stringREF (stringREF) : " << std::endl;
	std::cout << stringREF << std::endl;
}
