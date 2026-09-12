CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = rotaArreglo

all: $(TARGET)

$(TARGET): rotaArreglo.o 
	$(CC) $(CFLAGS) $^ -o $@

rotaArreglo.o: rotaArreglo.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm *.o $(TARGET)

.PHONY: all clean