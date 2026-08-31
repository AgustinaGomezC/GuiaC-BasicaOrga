CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = mensajeSecreto

all: $(TARGET)

$(TARGET): mensajeSecreto.o 
	$(CC) $(CFLAGS) $^ -o $@

mensajeSecreto.o: mensajeSecreto.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm *.o $(TARGET)

.PHONY: all clean