#include <stdio.h>
int factorial(int n); 

int main(){
    int n;
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    if (n == 0){
        printf("Resultado de n factorial = 0");
    }
    if (n < 0){
        printf("El factorial de un numero negativo no está definido");
    }
    else{
        int numero = factorial(n);
        printf("Resultado de n factorial = %d", numero);
    }
    return 0;
}

int factorial(int n){
    int acumulador = 1;
    for (int i=1; i <= n; i++){
        acumulador = acumulador * i;
    }
    return acumulador;
}