#include <stdio.h>
#define FELIZ 0
#define TRISTE 1

int estado = TRISTE; // static duration. file scope

void ser_feliz();
void print_estado();

int main(){
    print_estado();
    ser_feliz();
    print_estado();
}

void ser_feliz(){
    estado = FELIZ;
}

void print_estado(){
    printf("Estoy %s\n", estado == FELIZ ? "feliz" : "triste");
}