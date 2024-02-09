/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testeur.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 14:03:04 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/09 14:54:56 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <iostream>

void	exec(std::string str) {
	std::cout << "-----------------------------------------------------------------------------------------------" << std::endl;
	std::cout << "cmd: " << str << std::endl;
	std::cout << "-----------------------------------------------------------------------------------------------" << std::endl;
	system(str.c_str());
}

int	main(void) {
	exec("./ex04 ./tests/noFile Voila Rien");
	getchar();
	exec("./ex04 ./tests/file1 Oui Non");
	getchar();
	exec("./ex04 ./tests/file2 'Pas dans le fichier' 'Donc jamais'");
	getchar();
	exec("./ex04 ./tests/file3 'Elle est belle pour qui la voit,' 'Je ne suis pas poete,'");
	getchar();
	exec("./ex04 ./tests/file4 a AAA");
	getchar();
	exec("./ex04 ./tests/file5 bbbbb B");
	getchar();
	exec("./ex04 ./tests/file6 is ARE");
	return (0);
}
