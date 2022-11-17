/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <aapresya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 09:57:10 by aapresya          #+#    #+#             */
/*   Updated: 2022/10/15 12:56:36 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

# include <iostream>
# include "Contact.hpp"

class PhoneBook {

	private:
		Contact _contacts[8];
		int		_size;
		int		_current;
		std::string read_input(std::string text);

	public:
		void add();
		void search(int i);
		void display();
		int get_size() const;
		PhoneBook(void);
};

#endif