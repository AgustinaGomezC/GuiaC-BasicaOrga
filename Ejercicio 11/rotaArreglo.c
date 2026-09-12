#include <stdio.h>

int main(){
    int s[] = {1,2,3,4};
    int maximoIndice = (sizeof(s)/ sizeof(s[0]))-1;

    int primerElemento = s[0];

    for(int i = 0; i < maximoIndice; i++){ /*aca ya elimino el ultimo elemento*/
        s[i] = s[i+1];
    }
    s[maximoIndice] = primerElemento;

    for(int i = 0; i < maximoIndice+1; i++){ /*+1 porque quiero que se lea el ultimo elemento inclusive*/
        printf("%d\n",s[i]);
    }

    return 0;
}

