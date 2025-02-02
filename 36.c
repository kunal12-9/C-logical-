 //Q)write a c program input number and check number is divisible by 5 or not ?
#include<stdio.h>
int main() {
int num;
printf("enter any number");
scanf("%d",&num);

if(num%5==0){
printf("number is divisible by 5");
}

else{
printf("number is not divisible 5");
}
return 0;
}