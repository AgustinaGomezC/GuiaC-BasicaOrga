#include <stdio.h>

int main(){
    int i = 8;
    printf("%d\n", i);
    ++i; /*i=9*/
    printf("%d\n", i);
    i++; /*i=10*/
    printf("%d\n", i);

    i--; /*i=9*/
    printf("%d\n", i);
    --i; /*i=8*/
    printf("%d\n", i);

}