#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string _name;
		DiamondTrap(void);							//Canonical form			

	public:
		DiamondTrap(const std::string &name);
		DiamondTrap(const DiamondTrap &other);		//Canonical form
		~DiamondTrap(void);							//Canonical form
		using ClapTrap::operator=;					//Canonical form
		using ScavTrap::attack;
		void whoAmI();
};

#endif