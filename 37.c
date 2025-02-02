/*Q)write a c program input character 'b' :ball 
		otherwise :input is not matched */

#include<stdio.h>
int main() {
    char b;
    printf("enetr any single character");
    scanf("%c",&b);
    if(b=='b'){
        printf("ball");
    }
    else{
       printf("input is not matched");
    }  

return 0;

}