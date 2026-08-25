#include <stdio.h>
#include <stdint.h>

int main(){
    printf("Entero fijo 8 bits: %lu bytes \n", sizeof(int8_t));
    printf("Entero fijo 16 bits: %lu bytes \n", sizeof(int16_t));
    printf("Entero fijo 32 bits: %lu bytes \n", sizeof(int32_t));
    printf("Entero fijo 64 bits: %lu bytes \n", sizeof(int64_t));

    printf("Entero fijo 8 bits sin signo: %lu bytes sin signo \n", sizeof(int8_t));
    printf("Entero fijo 16 bits sin signo: %lu bytes sin signo \n", sizeof(int16_t));
    printf("Entero fijo 32 bits sin signo: %lu bytes sin signo \n", sizeof(int32_t));
    printf("Entero fijo 64 bits sin signo: %lu bytes sin signo \n", sizeof(int64_t));
}