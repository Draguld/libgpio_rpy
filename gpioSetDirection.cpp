#include "libgpio.hpp"

void	gpioSetDirection(int gpio, int direction)
{
	std::ostringstream	buffer;
	std::string			file;
	std::ofstream		out;

	buffer << "/sys/class/gpio/gpio" << gpio << "/direction";
	file = buffer.str();
	out.open(file, std::ios::trunc);
	if (!out)
	{
		std::cout << "gpio direction have failed, check your permission." << std::endl;
		return;
	}
	if (direction == 1)
	{
		out << "out";
	}
	else
	{
		out << "in";
	}
	out.close();
}
