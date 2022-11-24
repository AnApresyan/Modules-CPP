/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:04:43 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/24 15:08:17 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void replace_text(std::ifstream &infile, std::string &str1, std::string &str2, std::string &text)
{
	std::string line;
	int index;

	while (getline(infile, line))
	{
		while (line.find(str1) != std::string::npos)
		{
			index = line.find(str1);
			line.erase(index, str1.length());
			line.insert(index, str2);
		}
		text += line;
		if (!infile.eof())
			text += '\n';
	}
}

int main(int args, char *argv[])
{
	std::string text;

	if (args != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}

	std::ifstream infile;
	std::ofstream outfile;
	std::string filename = argv[1];
	std::string str1 = argv[2];
	std::string str2 = argv[3];
	infile.open(filename);
	if (!infile.is_open())
	{
		std::cout << "Something wrong with the input file" << std::endl;
		return (1);
	}
	outfile.open(filename + ".replace");
	if (!outfile.is_open())
	{
		std::cout << "Something wrong with the output file" << std::endl;
		return (1);
	}
	replace_text(infile, str1, str2, text);
	if (!text.empty())
		outfile << text;
	infile.close();
	outfile.close();
	return (0);
}