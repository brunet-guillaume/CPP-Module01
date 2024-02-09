/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:20:09 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/09 09:08:09 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanB::HumanB(std::string name): name(name), weapon(NULL) {
	std::cout << "\033[0;36m// " << name << " created without weapon " << "\033[0m" << std::endl;
}

HumanB::~HumanB() {
	std::cout << "\033[0;36m// " << this->name << " deleted" << "\033[0m" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
	std::cout << "\033[0;36m// " << name << " get weapon " << this->weapon->getType() << "\033[0m" << std::endl;
}

void	HumanB::attack(void) {
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}
