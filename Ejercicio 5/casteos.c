#include <stdio.h>

int main(){
    float valorF = 0.1;
    double valorD = 0.1;
    printf("Valor float: %f\n", valorF);
    printf("Valor double: %lf\n", valorD);

    //casteos a int
    int deFloatAInt = (int)valorF;
    int deDoubleAInt = (int)valorD;

    printf("Valor de float a int: %d\n", deFloatAInt);
    printf("Valor de double a int: %d\n", deDoubleAInt);

}