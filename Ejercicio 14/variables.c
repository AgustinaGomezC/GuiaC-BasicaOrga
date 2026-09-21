#include <stdio.h>
int i; /*variable global*/

int main(){
    printf("i = %d\n",i);
    int i = 5;    
    printf("i = %d\n",i);
    return 0;
}
/*dependiendo el orden, la variable local puede pisar a la global dentro de main*/
