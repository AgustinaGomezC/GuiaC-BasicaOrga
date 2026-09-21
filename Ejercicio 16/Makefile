CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = scopeDuracionV1

all: $(TARGET)

$(TARGET): scopeDuracionV1.o 
	$(CC) $(CFLAGS) $^ -o $@

scopeDuracionV1.o: scopeDuracionV1.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm *.o $(TARGET)

.PHONY: all clean