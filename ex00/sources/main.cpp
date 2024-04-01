/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:07:11 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/06 10:08:43 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {
	Zombie	*z;

	z = newZombie("Zombie");
	z->announce();
	randomChump("Eibmoz");
	delete z;
	return (0);
}
