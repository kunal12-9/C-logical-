/*write a c program input character :d 
				two number input 
				dividie 
			otherwise :input is not matched*/

#include<stdio.h>
int main() {
    char h;
    printf("enter any single character");
    scanf("%c",&h);
    if(h=='d')
    {
        int a,b,c;
        printf("enter the value of a,b");
        scanf("%d %d",&a,&b);
        c=a/b;
        printf("%d",c);
        }

    else{
        printf("input not matched");
    } 

    return 0;   


}