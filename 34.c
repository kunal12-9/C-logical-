/*Q)write a c program input age when age is greater than 18 then print you are valid for vote 
			otherwise :you are not valid for voter*/
#include<stdio.h>
  int main(){
    int age;
    printf("enter the any age");
    scanf("%d",&age);

    if(age>18){
        printf("you are valid for vote");
    }

    else{
        printf("you are not valid for vote");
    }
    return 0;
  
   }  
