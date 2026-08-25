CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = casteos

all: $(TARGET)

$(TARGET): casteos.o 
	$(CC) $(CFLAGS) $^ -o $@

casteos.o: casteos.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm *.o $(TARGET)

.PHONY: all clean