CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = variables

all: $(TARGET)

$(TARGET): variables.o 
	$(CC) $(CFLAGS) $^ -o $@

variables.o: variables.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm *.o $(TARGET)

.PHONY: all clean