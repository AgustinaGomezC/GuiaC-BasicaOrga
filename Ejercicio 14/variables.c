#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int s[] = {0,0,0,0,0,0};
    int longitud = (sizeof(s)/ sizeof(s[0]));

    for(int i = 0; i < 60000000; i++){ 
        int numero = rand()%(6-1+1)+1;/*numero_rand=rand()% (max - min + 1) + min
                                        (max - min +1): calula la cantidad total de numero que abarca el rango
                                        +min: Desplaza ese resultado hacia arriba para que el rango comience en tu número mínimo en lugar de arrancar en cero*/
        if(numero == 1){
            s[0]++;
        }if(numero == 2){
            s[1]++;
        }if(numero == 3){
            s[2]++;
        }if(numero == 4){
            s[3]++;
        }if(numero == 5){
            s[4]++;
        }if(numero == 6){
            s[5]++;
        }
    }
    for(int i = 0; i < longitud; i++){
        printf("%d\n",s[i]);
    }
    return 0;
}

