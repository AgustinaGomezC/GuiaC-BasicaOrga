CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = anchoFijo

all: $(TARGET)

$(TARGET): anchoFijo.o 
	$(CC) $(CFLAGS) $^ -o $@

anchoFijo.o: anchoFijo.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm *.o $(TARGET)

.PHONY: all clean