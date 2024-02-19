/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:09:17 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/19 11:53:48 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie	*horde;
	int		nbZombies;

	nbZombies = 12;
	horde = zombieHorde(nbZombies, "Zombie");
	if (!horde)
		return (1);
	for (int i = 0; i < nbZombies; i++)
		horde[i].announce();
	delete [] horde;
}
