/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 15:12:57 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/09 16:20:49 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl() {
}

Harl::~Harl() {
}

void	Harl::debug(void) {
	switch (this->severity_level) {
		case 0:
			std::cout << "\e[0;35m[ DEBUG ]" << std::endl;;
			std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-i";
			std::cout << "specialketchup burger. I really do !\e[0m" << std::endl;
			break ;
		default:
			break ;
	}
}

void	Harl::info(void) {
	switch (this->severity_level) {
		case 0:
		case 1:
			std::cout << "\e[0;32m[ INFO ]" << std::endl;;
			std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put ";
			std::cout << "enough bacon in my burger ! If you did, I wouldn’t be asking for more !\e[0m" << std::endl;
			break ;
		default:
			break ;
	}
}

void	Harl::warning(void) {
	switch (this->severity_level) {
		case 0:
		case 1:
		case 2:
			std::cout << "\e[0;33m[ WARNING ]" << std::endl;;
			std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming ";
			std::cout << "for years whereas you started working here since last month.\e[0m" << std::endl;
			break ;
		default:
			break ;
	}
}

void	Harl::error(void) {
	switch (this->severity_level) {
		case 0:
		case 1:
		case 2:
		case 3:
			std::cout << "\e[0;31m[ ERROR ]" << std::endl;;
			std::cout << "This is unacceptable ! I want to speak to the manager now.\e[0m" << std::endl;
			break ;
		default:
			break ;
	}
}

void	Harl::complain(std::string level) {
	void		(Harl::*func[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (int i = 0; i < 4; i++) {
		if (level.compare(str[i]) == 0)
			(this->*func[i])();
	}
}

void	Harl::set_severity_level(std::string level) {
	std::string	str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	this->severity_level = -1;
	for (int i = 0; i < 4; i++) {
		if (level.compare(str[i]) == 0)
			this->severity_level = i;
	}
	if (this->severity_level == -1)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
