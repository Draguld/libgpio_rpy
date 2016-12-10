#include "libgpio.hpp"

int		gpioGetValue(int gpio)
{
	std::ostringstream	buffer;
	std::string			file;
	std::ifstream		in;
	std::string			value;

	buffer << "/sys/class/gpio/gpio" << gpio << "/value";
	file = buffer.str();
	in.open(file);
	if (!in)
	{
		std::cerr << "gpio value have failed to read, check your permission." << std::endl;
		return (-1);
	}
	in >> value;
	in.close();
	if (value == "1")
		return (1);
	else if (value == "0")
		return (0);
	std::cerr << "gpio value file is not a valid file." << std::endl;
	return(-1);
}
