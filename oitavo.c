#include <stdio.h>
int main(){
    float nota1;
    scanf("%f",&nota1);
    float nota2;
    scanf("%f",&nota2);
    float nota3;
    scanf("%f",&nota3);
    float nota4;
    scanf("%f",&nota4);
    float media;
    media=((nota1*4)+(nota2*3)+(nota3*2)+(nota4*1))/10;
    printf("media: %0.2f\n",media);
     return 0;
}