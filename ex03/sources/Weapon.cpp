/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 08:30:28 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/09 09:07:14 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type): type(type){
	std::cout << "\033[0;36m// Weapon created with type : " << type << "\033[0m" << std::endl;
}

Weapon::~Weapon(void) {
	std::cout << "\033[0;36m// Weapon with type : " << this->type << " deleted" << "\033[0m" << std::endl;
}

const std::string &Weapon::getType() {
	return (this->type);
}

void	Weapon::setType(std::string type) {
	std::cout << "\033[0;36m// Weapon with type : " << this->type << " change in : " << type << "\033[0m"  <<std::endl;
	this->type = type;
}
