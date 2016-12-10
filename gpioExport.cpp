#include "libgpio.hpp"

void	gpioExport(int gpio)
{
	std::ofstream	file;
	file.open("/sys/class/gpio/export");
	if (!file)
	{
		std::cout << "unable to export gpio " << gpio << " check your access." << std::endl;
	}
	file << gpio;
	file.close();
}
