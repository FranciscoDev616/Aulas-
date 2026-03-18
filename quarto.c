#include <stdio.h>
#include <math.h>
#define PI 3.14
int main(){
    float raio, area;
    scanf("%f",& raio);//leia raio
    area=PI*pow(raio,2);
    printf("Area: %0.2f\n", area);//escreva raio
    return 0;
}