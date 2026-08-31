#include <stdio.h>
#include <stdint.h>

int main(){
    uint32_t a = 0xE0000007;
    uint32_t maskMasSig = 0xE0000000;
    uint32_t maskMenosSig = 0x00000007;

    uint32_t aMenosSig = a & maskMenosSig;
    uint32_t aMasSig = a & maskMasSig;
    
    for (int i=1;i < 30;i++){
        aMasSig>>=1;
    }

    if (aMasSig == aMenosSig){
        printf("Son iguales");
    }else{
        printf("Son distintoss");
    }


}