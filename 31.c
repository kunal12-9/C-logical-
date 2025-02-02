//8.9*1.67-(6.21-5.6)+7.8-34 +157

#include<stdio.h>
int main () {
    float a,b,c,d,e,f,j,h;
    printf("enter the value a,b,c,d,e");
    scanf("%f %f %f %f %f %f %f",&a,&b,&c,&d,&e,&f,&j);
    h=a*b-(c-d)+e-f+j;
    printf("%.2f",h);
    return 0;
}