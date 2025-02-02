/*Q)write a c program input number when number is greater than 50 :number is greater than 50 
					otherwise :number is not greater than 50*/
#include<stdio.h>
int main() {
    int num;
   printf("enter any number");
  scanf("%d",&num);
  if(num>50){
    printf("number is grather than 50");
  }
  else{
    printf("number is not greather than 50");
  }
  return 0;
  }