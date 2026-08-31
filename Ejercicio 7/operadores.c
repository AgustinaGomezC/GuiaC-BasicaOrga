#include <stdio.h>

int main(){
    int a = 5;
    printf("Valor a: %d\n", a);
    int b = 3;
    printf("Valor b: %d\n", b);
    int c = 2;
    printf("Valor c: %d\n", c);
    int d = 1;
    printf("Valor d: %d\n", d);

    int operacion = a+b*c/d;
    printf("Valor operacion: %x\n", operacion);
    int modulo = a % b; /*operador modulo o resto de una division*/
    printf("Valor modulo: %x\n", modulo);
    
    int esIgual = a==b;
    printf("Valor esIgual: %d\n", esIgual);
    int esDistinto = a!=b; 
    printf("Valor esDistinto: %d\n", esDistinto);
    
    int compANDBitABit = a&b; /*operador AND bit a bit*/
    printf("Valor compANDBitABit: %d\n", compANDBitABit);
    int compORBitABit = a&b; /*operador OR bit a bit*/
    printf("Valor compORBitABit: %d\n", compORBitABit);
    
    a = ~a;
    printf("Valor a: %d\n", a);

    int compacionAND = a&&b; /*operador AND típico*/
    printf("Valor compacionAND: %d\n", compacionAND);
    int compacionOR = a||b; /*operador OR típico*/
    printf("Valor compacionOR: %d\n", compacionOR);

    a <<= 1; /*shiftIzquierda: se desplaza exactamente 1 bit hacia la izquierda (multiplicando por 2)*/
    printf("Valor a: %d\n", a);
    a >>= 1;/*shiftDerecha: se desplaza exactamente 1 bit hacia la derecha*/
    printf("Valor a: %d\n", a);

    a += b;
    printf("Valor a: %d\n", a);
    a -= b;
    printf("Valor a: %d\n", a);
    a *= b;
    printf("Valor a: %d\n", a);
    a /= b;
    printf("Valor a: %d\n", a);
    a %= b;
    printf("Valor a: %d\n", a);

}