CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic -std=c11
TARGET = libstrlen.a
SRC = strlen.c
OBJ = $(SRC:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	ar rcs $(TARGET) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

test: all main
	./main

main: main.o $(TARGET)
	$(CC) $(CFLAGS) main.o -L. -lstrlen -o main

.PHONY: all clean test
