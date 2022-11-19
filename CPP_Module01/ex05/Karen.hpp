/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:04:59 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/19 11:05:00 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
# define KAREN_H

#include <string>
#include <iostream>

class Karen
{
	private:
		void debug(void);
 		void info(void);
		void warning(void);
		void error(void);

	public:
		void complain(std::string level);

};

#endif