/*write a c program input character :z,x,c,v,b,n,m, :lower line 
		  otherwise :input is not matched */
		  
#include<stdio.h>
int main() {
    char mahi;
    printf("enter the any signle charecter");
    scanf("%c",&mahi);
    
    if(mahi=='z' || mahi=='x' || mahi=='c' || mahi=='v' ||
       mahi=='b' || mahi=='n' || mahi=='m'){
    printf("lower line");       
       }
    else{
        printf("input is not matched");
    }
    return 0;
       
}