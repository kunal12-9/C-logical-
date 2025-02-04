/*write a c program input number and print 1 :jan 2 :feb 3 :march total months 
otherwise :input is not matched */

#include<stdio.h>
int main() {
    int k;
    printf("enter the any number");
    scanf("%d",&k);
    if(k==1){
        printf("jan");
    }
    else if(k==2){
        printf("feb");    
    }
    else if(k==3){
        printf("march");
    }
    else if(k==4){
        printf("april");
    }
    else if(k==5){
        printf("may");
    }
    else if(k==6){
        printf("jun");
    }
    else if(k==7){
        printf("july");
    }
    else if(k==8){
        printf("aug");
    }
    else if(k==9){
        printf("sep");
    }
    else if(k==10){
        printf("oct");
    }
    else if(k==11){
        printf("nov");
    }
    else if(k==12){
        printf("dec");
    }
    else{
        printf("input is not matched");
    }
    
    return 0;
    }