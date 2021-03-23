CC=gcc
CFLAGS=-Wall -Wextra
SRC=test.c
OBJ=$(SRC:.c=.o)
TARGET=test

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

.c.o:
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(TARGET)

re: fclean all
