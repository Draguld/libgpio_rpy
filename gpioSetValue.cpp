#include "libgpio.hpp"

void	gpioSetValue(int gpio, int value)
{
	std::ostringstream	buffer;
	std::string			file;
	std::ofstream		out;

	buffer << "/sys/class/gpio/gpio" << gpio << "/value";
	file = buffer.str();
	out.open(file, std::ios::trunc);
	if (!out)
	{
		std::cout << "gpio value have failed, check your permission." << std::endl;
		return;
	}
	if (value == 1)
	{
		out << "1";
	}
	else
	{
		out << "0";
	}
	out.close();
}
