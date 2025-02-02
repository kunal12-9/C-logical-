//3.4+1.2*(3.7-1.2)/2+6.8
#include<stdio.h>
int main () {
    float a,b,c,d,e,j;
    printf("enter the value a,b,c,d,e");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    j=a*b+(c-d)/b+e;
    printf("%.2f",j);
    return 0;
}