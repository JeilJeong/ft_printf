CC=gcc
CFLAGS=-Wall -Wextra -Werror
SRC=$(wildcard srcs/*.c)
OBJ=$(SRC:.c=.o)
HEADER=./includes
TARGET=libftprintf.a

all: $(TARGET)

$(TARGET): $(OBJ)
	ar crs $(TARGET) $^

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(TARGET)

re: fclean all

.PHONY: all clean fclean re
