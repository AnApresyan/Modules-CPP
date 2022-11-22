#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	private:
		FragTrap(void);							//Canonical form			

	public:
		FragTrap(const std::string &name);
		FragTrap(const FragTrap &other);		//Canonical form
		~FragTrap(void);						//Canonical form
		using ClapTrap::operator=;				//Canonical form
		void highFivesGuys(void);
};

#endif