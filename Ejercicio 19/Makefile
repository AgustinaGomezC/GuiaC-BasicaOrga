CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = programa

all: $(TARGET)

$(TARGET): programa.o 
	$(CC) $(CFLAGS) $^ -o $@

programa.o: programa.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm *.o $(TARGET)

.PHONY: all clean