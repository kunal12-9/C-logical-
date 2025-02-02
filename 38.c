/*Q)write a c program input character 'c' :cat 
		otherwise :input is not matched */
#include<stdio.h>
int main() {
    char c;
    printf("enetr any single character");
    scanf("%c",&c);
    if(c=='c'){
        printf("cat");
    }
    else{
       printf("input is not matched");
    }  

return 0;

}


