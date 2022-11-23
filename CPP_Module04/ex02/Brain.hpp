/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 19:56:56 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/23 14:33:49 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <string>
#include <iostream>

class Brain
{
	private: 
		std::string ideas[100];
	public:
		Brain(void);
		~Brain(void);
		Brain(const Brain &other);
		Brain &operator=(const Brain &other);
};

#endif