CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = dadosRandom

all: $(TARGET)

$(TARGET): dadosRandom.o 
	$(CC) $(CFLAGS) $^ -o $@

dadosRandom.o: dadosRandom.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm *.o $(TARGET)

.PHONY: all clean