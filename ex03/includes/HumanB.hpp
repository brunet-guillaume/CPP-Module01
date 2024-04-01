/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:14:12 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/09 08:52:41 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB {
	private:
		std::string	name;
		Weapon		*weapon;

	public:
		HumanB(std::string name);
		~HumanB();

		void	setWeapon(Weapon &weapon);
		void	attack(void);
};

#endif
