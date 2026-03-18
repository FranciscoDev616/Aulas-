#include <stdio.h>
int main(){
    float base;
    scanf("%f",&base);
    float altura;
    scanf("%f",&altura);
    float area;
    area = base * altura;
    printf("area: %0.2f\n", area);
    return 0;
}