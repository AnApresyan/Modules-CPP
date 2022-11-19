#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <string>

class Zombie
{
	private:
		std::string _name;

	public:
		void announce( void );
		void set_name(std::string name);
		Zombie(std::string name);
		Zombie();
		~Zombie();
};


#endif
