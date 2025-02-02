
#include<stdio.h>
int main() {
    char d;
   printf("enter any single character");
    scanf("%c",&d);
    if(d=='m')
    {
        int a,b,c,f,g; 
        printf("enter the value a,b,c,f");
        scanf("%d %d %d %d",&a,&b,&c,&f);
        g=a*b*c*f;
        printf("%d",g);
    }
    else{
        printf("input is not matched");
    }
    return 0;

}                 