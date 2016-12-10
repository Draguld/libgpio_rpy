#ifndef		LIBGPIO_HPP
#define		LIBGPIO_HPP

#include <iostream>
#include <fstream>
#include <sstream>

void	gpioExport(int gpio);
void	gpioUnexport(int gpio);

void	gpioSetDirection(int gpio, int direction);
int		gpioGetDirection(int gpio);

void	gpioSetValue(int gpio, int value);
int		gpioGetValue(int gpio);

#endif
