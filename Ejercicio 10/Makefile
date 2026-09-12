CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = whilePorFor

all: $(TARGET)

$(TARGET): whilePorFor.o 
	$(CC) $(CFLAGS) $^ -o $@

whilePorFor.o: whilePorFor.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm *.o $(TARGET)

.PHONY: all clean