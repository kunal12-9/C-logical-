/*write a c program input character :a,s,d,f,g,h,j,k,l :mid line 
		  otherwise :input is not matched */
		 
#include<stdio.h>
int main() {
    char vk;
    printf("enetr the any single charecter");
    scanf("%c",&vk);
    
    if(vk=='a' || vk=='s' || vk=='d' || vk=='f' || vk=='g' ||
       vk=='h' || vk=='j' || vk=='k' || vk=='l'){
           printf("mid line");
        }
    else{
        printf("input is not matched");
    } 
    
    return 0;
    }
       
      