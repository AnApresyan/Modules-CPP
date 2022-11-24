/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:05:18 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/24 15:21:50 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

enum level
{
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	NONSENSE
};

level toEnum(std::string level)
{
	if (level == "DEBUG")
		return (DEBUG);
	if (level == "INFO")
		return (INFO);
	if (level == "WARNING")
		return (WARNING);	
	if (level == "ERROR")
		return (ERROR);
	return (NONSENSE);
}

int main(int argc, char *argv[])
{
	Karen karen;

	if (argc != 2)
	{
		std::cout << "No level specified or too many arguments\n";
		return (1);
	}

	std::string lev = argv[1];
	level lv = toEnum(lev);

	switch (lv)
	{
		case DEBUG:
			karen.complain("DEBUG");
			/* fall through */
		case INFO:
			karen.complain("INFO");
			/* fall through */
		case WARNING:
			karen.complain("WARNING");
			/* fall through */
		case ERROR:
			karen.complain("ERROR");
			break;
		default:
			karen.complain(lev);
			break;
	}
	return (0);
}