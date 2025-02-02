/*Q)write a c program input number and check number is divide by two or not 
				     check number is even or odd : 

even :divide by 2 

odd :does not divide by 2 */

#include<stdio.h>
int main(){
   int num;
   printf("enter any number ");
   scanf("%d",&num);
   if(num%2==0){
       printf("number is even ");
   }
   else{
       printf("number is odd");
   }
    return 0;
}