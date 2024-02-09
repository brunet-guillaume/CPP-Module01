/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 15:06:52 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/09 16:16:40 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main(int argc, char **argv) {
	Harl	harl;

	if (argc != 2) {
		std::cerr << "HarlFilter: wrong number of arguments" << std::endl;
		std::cerr << "./HarlFilter \"Minimum severity level\"" << std::endl;
		return (1);
	}
	harl.set_severity_level(argv[1]);
	(void) argv;
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("NIMP");
	harl.complain("WARNING");
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("ERROR");
	harl.complain("DEBUG");
	harl.complain("NIMP");
	harl.complain("WARNING");
	harl.complain("NIMP");
	harl.complain("DEBUG");
	harl.complain("ERROR");
	harl.complain("NIMP");
	harl.complain("ERROR");
	harl.complain("WARNING");
	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("ERROR");
	harl.complain("NIMP");
	harl.complain("DEBUG");
	harl.complain("ERROR");
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("DEBUG");
	return (0);
}
