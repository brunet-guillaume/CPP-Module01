/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 09:56:16 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/08 15:10:43 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
	private:
		std::string	name;

	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);

		void	announce(void);
		void	set_name(std::string name);
};

Zombie	*zombieHorde(int N, std::string name);

#endif
