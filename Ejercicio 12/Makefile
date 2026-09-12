CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = rotaParametroArreglo

all: $(TARGET)

$(TARGET): rotaParametroArreglo.o 
	$(CC) $(CFLAGS) $^ -o $@

rotaParametroArreglo.o: rotaParametroArreglo.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm *.o $(TARGET)

.PHONY: all clean