
#ifndef AANIMAL_H
# define AANIMAL_H

#include <string>
#include <iostream>

class AAnimal
{
	protected:
		std::string type;
	public:
		AAnimal(void);												//Canonical form
		virtual ~AAnimal();											//Canonical form
		AAnimal(const AAnimal &other);								//Canonical form
		AAnimal &operator=(const AAnimal &other);		//Canonical form
		const std::string &getType() const;
		virtual void makeSound() const = 0;
};

#endif