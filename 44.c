/*write a c program input character :q,w,e,r,t,y,u,i,o,p :upper line 
			otherwise : input is not matched*/
		
#include<stdio.h>
int main() {
    char mk;
    printf("enter the any single charecter");
    scanf("%c",&mk);
    if(mk=='q' || mk=='w' || mk=='e' || mk=='r' || mk=='t' ||
       mk=='y' || mk=='u' || mk=='i' || mk=='o' || mk=='p'){
           printf("upperline");
         }
    else{
        printf("input is not matched");
    }
    return 0;
}
			
			

