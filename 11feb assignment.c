//10 ----1 dry run //

#include <stdio.h>

int main()
{
    int a=10;
    while(a>=1)
    {
        printf("%d\n",a);
        a--;
    }

    return 0;
}
-------------------------------------------------------------------------------------------------------
//98---45 number print 
#include<stdio.h>
int main(){
    int a=98;
    while(a>=45)
    {
        printf("%d\n",a);
        a--;
    }
    return 0;
}
--------------------------------------------------------------------------------------------------------------
//1 ---- 10 even number (dry run ) 
#include<stdio.h>
int main(){
    int a=1;
    while(a<=10){
        if(a%2==0)
        {
            printf("%d\n",a);
        }
        a++;
        }
        return 0;
  }
-----------------------------------------------------------------------------------------------------------------
//23-- 89 even number 

#include<stdio.h>
int main(){
    int a=23;
    while(a<=89){
        if(a%2==0)
        {
         printf("%d\n",a);
         }
        a++;
    }
    return 0;
}
-----------------------------------------------------------------------------------------------------------------------
 //56 ----34 even number 

#include<stdio.h>
int main(){
    int a=56;
    while(a>=34)
    {
        if(a%2==0)
        {
         printf("%d\n",a);
          
        }
        a--;
    }
    return 0;
}  
------------------------------------------------------------------------------------------
//10 ---1 odd number

#include<stdio.h>
int main(){
    int a=10;
    while(a>=1)
    {
        if(a%2!=0){
            printf("%d\n",a);
        }
        a--;
    }
}
---------------------------------------------------------------------------------------------
//1 --- 10 number sum (dry run )

#include<stdio.h>
int main(){
    int sum=0;
    int a=1;
    while(a<=10)
    {
        sum=sum+a;
        a++;
    }
    printf("%d",sum);
    
    return 0;
}
----------------------------------------------------------------------------------------------------
//reverse count and reverse number 982849 :dry run 

#include<stdio.h>
int main(){
    int a=982849;
    int count=0;
    while(a>0){
        a=a/10;
        count++;
    }
    printf("%d",count);
    
    return 0;
}




#include<stdio.h>
int main(){
    int n=982849;
    int rem;
    int sum=0;
    while(n>0)
    {
     rem=n%10;
     sum=sum*10+rem;
     n=n/10;
    }
    printf("%d",sum);
    return 0;
}
----------------------------------------------------------------------------------------------------------------------------------------
//palindrome number :123454321 dry run 
#include<stdio.h>
int main(){
    int n=123454321;
    int temp=n;
    int rem;
    int sum=0;
    while(n>0){
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    if(temp==sum){
        printf("palindrome number");
    }
    else{
        printf("not matched");
    }
    return 0;
}   
---------------------------------------------------------------------------------------------------------------------------------------
   /*a :1 --- 10 even number 
b :10 ---1 odd number 
c:reverse number 
d :digit count of number 
p:palindrome number check 
otherwise :input is not matched */

#include <stdio.h>

int main()
{
    char k;
    printf("enter any charecter");
    scanf("%c",&k);
    if(k=='a')
    {
         int a=1;
    while(a<=10)
    {
         printf("%d\n",a);
        a++;
    }
    }
    
    else if(k=='b')
    {
    int a=10;
    while(a>=1)
    {
        if(a%2!=0){
        printf("%d\n",a);      
    }
         a--; 
    }
    }
    
    else if(k=='c')
    {
     int a=982849;
    int count=0;
    while(a>0){
        a=a/10;
        count++;
    }
    printf("%d",count);   
    }
    
    else if(k=='d')
    {
        int n=982849;
    int rem;
    int sum=0;
    while(n>0)
    {
     rem=n%10;
     sum=sum*10+rem;
     n=n/10;
    }
    printf("%d",sum);
    }
    
    else if(k=='p')
    {
        int n=123454321;
    int temp=n;
    int rem;
    int sum=0;
    while(n>0){
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    if(temp==sum)
    {
        printf("palindrome number");
    }
    else
    {
        printf("not matched");
    }

    }
    else
    {
        printf("invalid");
    }
    return 0;
        
    }
    
 
    
    
    
    
    
    
    
   
 
    
