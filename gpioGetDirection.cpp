#include "libgpio.hpp"

int		gpioGetDirection(int gpio)
{
	std::ostringstream	buffer;
	std::string			file;
	std::ifstream		in;
	std::string			value;

	buffer << "/sys/class/gpio/gpio" << gpio << "/direction";
	file = buffer.str();
	in.open(file);
	if (!in)
	{
		std::cerr << "gpio direction have failed to read, check your permission." << std::endl;
		return (-1);
	}
	in >> value;
	in.close();
	if (value == "out")
		return (1);
	else if (value == "in")
		return (0);
	std::cerr << "gpio direction file is not a valid file." << std::endl;
	return(-1);
}
