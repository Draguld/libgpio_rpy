NAME=libgpio.a
CC=g++
CFLAGS=-Wall -Wextra -Werror
RM=rm -f
LDFLAGS=-L
LDLIBS=lgpio
STD=-std=c++11
HDDIRS=
SRC=gpioExport.cpp\
gpioUnexport.cpp\
gpioSetDirection.cpp\
gpioGetDirection.cpp\
gpioSetValue.cpp\
gpioGetValue.cpp

OBJ=$(SRC:.cpp=.o)

$(NAME): libgpio.hpp
	$(CC) $(STD) $(CFLAGS) -c $(SRC) $(HDDIRS)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
