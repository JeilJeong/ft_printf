CC=gcc
CFLAGS=-Wall -Wextra
SRC=$(wildcard srcs/*.c)
OBJ=$(SRC:.c=.o)
HEADER=./includes
TARGET=ft_main

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -I $(HEADER) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(TARGET)

re: fclean all
