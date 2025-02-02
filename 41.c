/*write a c program input character :s 
				three number input 
				substraction 
			otherwise :input is not matched */

#include<stdio.h>
int main() {
    char d;
   printf("enter any single character");
    scanf("%c",&d);
    if(d=='s')
    {
        int a,b,c,f; 
        printf("enter the value a,b,c");
        scanf("%d %d %d",&a,&b,&c);
        f=a-b-c;
        printf("%d",f);
    }
    else{
        printf("input is not matched");
    }
    return 0;

}                  