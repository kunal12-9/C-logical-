/*write a c program input a character : a :aam b :iit baba m :Monalisa
		otherwise :input is not matched*/
		
#include<stdio.h>
int main(){
    char h;
    printf("enter the any charecter");
    scanf("%c",&h);
    if(h=='a'){
        printf("mango");
    }
    else if(h=='b'){
        printf("iit baba");
    }
    else if(h=='m'){
        printf("monalsiha");
    }
    else{
        printf("input is not matched");
    }
    
    return 0;
    }


