/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapresya <anahit.apresyan7@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:06:56 by aapresya          #+#    #+#             */
/*   Updated: 2022/11/20 20:07:18 by aapresya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_H
# define CLAP_TRAP_H

# include <string>
# include <iostream>

class ClapTrap
{
    private:
        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;
        ClapTrap(void);                                 //canonical form

    public:
        ClapTrap(std::string const name);
        ClapTrap(ClapTrap const &other);                //canonical form
        ~ClapTrap(void);                                //canonical form
        ClapTrap &operator=(ClapTrap const &other);     //canonical form

        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

//std::ostream &operator<<(std::ostream &o, const ClapTrap &clap_trap);

#endif