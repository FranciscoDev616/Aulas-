#include <stdio.h>
int main(){
    int a = 10,b = 20,c;
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("a: %d,b: %d",a,b);
    return 0;
}