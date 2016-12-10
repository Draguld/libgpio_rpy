#include "libgpio.hpp"

void	gpioUnexport(int gpio)
{
	std::ofstream	file;
	file.open("/sys/class/gpio/unexport");
	if (!file)
	{
		std::cout << "unable to unexport gpio " << gpio << " check your access." << std::endl;
	}
	file << gpio;
	file.close();
}
