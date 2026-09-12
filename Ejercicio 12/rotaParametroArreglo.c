#include <stdio.h>

int main(int repeticiones){
    int s[] = {1,2,3,4};
    int maximoIndice = (sizeof(s)/ sizeof(s[0]))-1;
    while(0<repeticiones){

        int primerElemento = s[0];

        for(int i = 0; i < maximoIndice; i++){ /*aca ya elimino el ultimo elemento*/
            s[i] = s[i+1];
        }
        s[maximoIndice] = primerElemento;

        for(int i = 0; i < maximoIndice+1; i++){
            printf("%d\n",s[i]);
        }
        repeticiones--;
    }
    return 0;
}

