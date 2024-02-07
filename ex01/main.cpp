/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:09:17 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/07 16:44:14 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie	*horde;
	int		nbZombies;

	nbZombies = 12;
	horde = zombieHorde(nbZombies, "Zombie");
	for (int i = 0; i < nbZombies; i++)
		horde[i].announce();
	delete [] horde;
}
