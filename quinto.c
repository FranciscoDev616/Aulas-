#include <stdio.h>
#define VALOR 32
int main(){
    float grausf, grausc;
    scanf("%f", &grausf);
    grausc=(5*(grausf-VALOR))/9;
    printf("graus celsius: %0.2f\n",grausc);
    return 0;
}