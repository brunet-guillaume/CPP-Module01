/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:42:55 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/19 11:52:11 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie *zombieHorde(int N, std::string name) {
	Zombie	*horde;

	if (N <= 0) {
		std::cerr << "Negative numbers or 0 are not allowed" << std::endl;
		return (NULL);
	}
	horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		horde[i].set_name(name);
	return (horde);
}
