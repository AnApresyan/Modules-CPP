#include "Karen.hpp"

enum level
{
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	NONSENSE
};

level toEnum(std::string level)
{
	if (level == "DEBUG")
		return (DEBUG);
	if (level == "INFO")
		return (INFO);
	if (level == "WARNING")
		return (WARNING);	
	if (level == "ERROR")
		return (ERROR);
	return (NONSENSE);

}

int main(int argc, char *argv[])
{
	Karen karen;

	if (argc != 2)
	{
		std::cout << "No level specified\n";
		return (1);
	}

	std::string lev = argv[1];
	level lv = toEnum(lev);

	switch (lv)
	{
	case ERROR:
		karen.complain("ERROR");
		/* fall through */
	case WARNING:
			karen.complain("WARNING");
				/* fall through */
	case INFO:
		karen.complain("INFO");
		/* fall through */
	case DEBUG:
		karen.complain("DEBUG");
			/* fall through */
	default:
		karen.complain(lev);
		break;
	}
	return (0);
}