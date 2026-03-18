#include <stdio.h>
#include <math.h>
int main(){
    float x1;
    scanf("%f",&x1);
    float y1;
    scanf("%f",&y1);
    float x2;
    scanf("%f",&x2);
    float y2;
    scanf("%f",&y2);
    float Distancia;
    Distancia=sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
    printf("Distancia de:(%0.2f,%0.2f) e (%0.2f,%0.2f) é %0.2f\n",x1,y1,x2,y2,Distancia);
    return 0;
}