CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = ies

all: $(TARGET)

$(TARGET): ies.o 
	$(CC) $(CFLAGS) $^ -o $@

ies.o: ies.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm *.o $(TARGET)

.PHONY: all clean