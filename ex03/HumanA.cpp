/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:15:04 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/09 09:08:58 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon): name(name), weapon(weapon) {
	std::cout << "\033[0;36m// " << name << " created with " << weapon.getType() << "\033[0m" << std::endl;
}

HumanA::~HumanA() {
	std::cout << "\033[0;36m// " <<  this->name << " deleted" << "\033[0m" << std::endl;
}

void	HumanA::attack(void) {
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
