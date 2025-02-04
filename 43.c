//write a c program input character and check character is vowel and consonant ?

#include<stdio.h>
int main() {
char kt;
 printf("enter any single");
scanf("%c",&kt);
 if(kt=='a' || kt=='e' || kt=='i' || kt=='o' || kt=='u'){
    printf("vowel");
        }
 else{
     printf("consonant");
         }
    return 0;    
}