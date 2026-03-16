#include <stdio.h>

void main (){
    float area, raio, pi;
    pi = 3.14;
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    area = pi * raio * raio;
    printf("O valor da área é: %.2f\n", area);
}