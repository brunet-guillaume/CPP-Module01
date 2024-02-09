/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EditFile.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 11:39:47 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/09 14:00:33 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EDITFILE_HPP
# define EDITFILE_HPP

# include <fstream>

# define SUCCESS 0
# define FAILURE 1

class	EditFile {
	private:
		std::string		file_name;
		std::string		new_file_name;
		std::string		replace_from;
		std::string		replace_to;
		std::string		content;

		std::ifstream	file_in;
		std::ofstream	file_out;
	
	public:
		EditFile(std::string name, std::string from, std::string to);
		~EditFile();

		std::string	get_file_name(void);
		std::string get_new_file_name(void);
		int			read_in(void);	
		int			write_out(void);	
};

#endif
