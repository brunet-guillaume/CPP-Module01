/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 09:39:49 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/09 14:41:37 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

#include "EditFile.hpp"

int	main(int argc, char **argv) {
	EditFile		*file;

	if (argc != 4) {
		std::cerr << "ex04: wrong number of arguments" << std::endl;
		std::cerr << "./ex04 <filename> \"string to replace\" \"replacement string\"" << std::endl;
	}

	file = new EditFile(argv[1], argv[2], argv[3]);
	if (file->read_in() != SUCCESS)
		return (FAILURE);
	if (file->write_out() != SUCCESS)
		return (FAILURE);
	delete file;
	return (SUCCESS);
}
