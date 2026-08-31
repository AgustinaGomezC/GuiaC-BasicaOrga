CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = shiftMascara

all: $(TARGET)

$(TARGET): shiftMascara.o 
	$(CC) $(CFLAGS) $^ -o $@

shiftMascara.o: shiftMascara.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm *.o $(TARGET)

.PHONY: all clean