/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <aapresya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 10:02:52 by aapresya          #+#    #+#             */
/*   Updated: 2022/10/15 12:42:54 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H
# include <string>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
		
	public:
		const std::string &get_first_name();
		const std::string &get_last_name();
		const std::string &get_nickname();
		const std::string &get_phone_number();
		const std::string &get_secret();
		void set_first_name(std::string str);
		void set_last_name(std::string str);
		void set_phone_number(std::string str);
		void set_nickname(std::string str);
		void set_secret(std::string str);
		
		Contact(std::string f, std::string l, std::string p, std::string n, std::string s);
		Contact(void);
};

#endif