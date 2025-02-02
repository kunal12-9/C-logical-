/*write a c program input character :a 
				two number input 
				addition 
			otherwise :input is not matched */


#include<stdio.h>
int main(){
    char ch;
    printf("enter any single character ");
    scanf("%c",&ch);
    if(ch=='a'){
        //two number input 
        int a,b,c;
        printf("enter the value of a and b ");
        scanf("%d %d",&a,&b);
        c=a+b;
        printf("%d",c);
    }
    else{
        printf("input is not matched ");
    }
    return 0;
}
