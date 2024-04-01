/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EditFile.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:51:10 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/19 15:51:52 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sys/stat.h>
#include <sys/types.h>
#include <cstring>
#include "EditFile.hpp"

EditFile::EditFile(std::string name, std::string from, std::string to): file_name(name), replace_from(from), replace_to(to) {
	this->new_file_name = this->file_name;
	this->new_file_name.append(".replace");
	std::cout << "\e[0;32mEditFile object created\n\e[0;33mFile to open: " << this->file_name << std::endl;
	std::cout << "String to replace: " << this->replace_from << std::endl;
	std::cout << "Replacement string: " << this->replace_to << "\e[0m" << std::endl << std::endl;
}

EditFile::~EditFile() {
	std::cout << "\e[0;32mEditFile object deleteted\n\e[0;33mFile to open: " << this->file_name << std::endl;
	std::cout << "String to replace: " << this->replace_from << std::endl;
	std::cout << "Replacement string: " << this->replace_to << "\e[0m" << std::endl << std::endl;
}

int	EditFile::read_in(void) {
	char		c;
	struct stat	type;	

	if (stat(this->file_name.c_str(), &type) == 0 && type.st_mode & S_IFDIR) {
		std::cerr << "\e[0;31m'" << this->file_name << "': is a directory\e[0m" << std::endl << std::endl;
		return (FAILURE);
	}
	this->file_in.open(file_name.c_str());
	if (!this->file_in.good()) {
		std::cerr << "\e[0;31m'" << this->file_name << "': unable to open file\e[0m" << std::endl << std::endl;
		this->file_in.close();
		delete this;
		return (FAILURE);
	} else if (this->file_in.is_open()){
		while (!this->file_in.eof() && this->file_in >> std::noskipws >> c)
			this->content += c;
		std::cout << "\e[0;32mFile '" << this->file_name << "' opened.\e[0m" << std::endl;
		std::cout << "\e[0;33mContent :\n\e[0;36m" << this->content << "\e[0m" << std::endl << std::endl;
	}
	this->file_in.close();
	return (SUCCESS);
}

int	EditFile::write_out(void) {
	int	pos;
	struct stat	type;	

	if (stat(this->new_file_name.c_str(), &type) == 0 && type.st_mode & S_IFDIR) {
		std::cerr << "\e[0;31m'" << this->new_file_name << "': already existe and is a directory\e[0m" << std::endl << std::endl;
		return (FAILURE);
	}
	this->file_out.open(new_file_name.c_str(), std::ofstream::trunc);
	if (!this->file_out.good()) {	
		std::cerr << "\e[0;31m'" << this->new_file_name << "': unable to create file\e[0m" << std::endl << std::endl;
		this->file_out.close();
		delete this;
		return (FAILURE);
	} else if (this->file_out.is_open()) {
		std::cout << "\e[0;32mFile '" << this->new_file_name << "' created.\e[0m" << std::endl;
		std::cout << "\e[0;33mContent :\n\e[0;36m";
		for (int i = 0; i < (int)this->content.length(); i++) {
			pos = this->content.find(this->replace_from, i);
			if (pos == i && this->replace_from.length() > 0) {
				std::cout << this->replace_to;
				this->file_out << this->replace_to;
				i += this->replace_from.length() - 1;
			} else {
				std::cout << this->content[i];
				this->file_out << this->content[i];
			}
		}
		std::cout << std::endl << std::endl;
	}
	this->file_out.close();
	return (SUCCESS);
}
