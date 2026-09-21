#include <stdio.h>

int g = 10;

void functionA(){
    int a = 20;
    static int b = 30;

    printf("Dentro de functionA: \n");
    printf(" g = %d\n", g); // g = 10
    printf(" a = %d\n", a); // a = 20
    printf(" b = %d\n", b); // b = 30

    //modificacion de las variables
    g += 5;
    a += 10;
    b += 5;
}
void functionB(){
    int a = 40;
    static int c = 50;

    printf ("\nDentro de functionB:\n");
    printf(" g = %d\n", g); // g = 15
    printf(" a = %d\n", a); // a = 40
    printf(" c = %d\n", c); // c = 50

    //modificacion de las variables
    g += 5;
    a += 10;
    c += 5;
}

int main(){
    printf("Dentro de main:\n");
    printf(" g = %d\n", g); // g = 20

    functionA();// g =
                // a =
                // b =
    functionB();// g =
                // a =
                // c = 
    functionA();// g = 
                // a = 
                // b = 
    functionB();// g = 
                // a = 
                // c = 

    printf("\nFinal en main:\n");
    printf(" g = %d\n", g);

    return 0;
}
