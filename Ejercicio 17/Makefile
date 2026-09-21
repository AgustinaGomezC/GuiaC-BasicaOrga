CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = scopeDuracionV2

all: $(TARGET)

$(TARGET): scopeDuracionV2.o 
	$(CC) $(CFLAGS) $^ -o $@

scopeDuracionV2.o: scopeDuracionV2.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm *.o $(TARGET)

.PHONY: all clean