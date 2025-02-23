/*1)Armstrong :
151 :dry run */
#include<stdio.h>
int main(){
    int n=151;
    int temp=n;
    int rem,sum=0;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if(temp==sum)
    {
        printf("armstrong number");
    }
    else{
        printf("not");
    }
    return 0;
        
}
----------------------------------------------------------------------------------------------------
/*sum of the digit 
6512 :dry run*/
#include<stdio.h>
int main(){
    int n=6512;
    int sum=0;
    int rem;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("%d",sum);

     return 0;
    }
-----------------------------------------------------------------------------------------------------------
//neon num=8
#include<stdio.h>
int main(){
    int n=8;
    int square=n*n;
    int rem,sum=0;
    while (square>0)
    {
        rem=square%10;
        sum=sum+rem;
        square=square/10;
    }
    if (sum==n)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    return 0;
}
-------------------------------------------------------------------------------------------------------------
    /*a :	Armstrong number 
p :palindrome number 
r :	reverse number 
s :	sum of digit 
n :neon number 
otherwise :input is not match*/

#include<stdio.h>
int main(){
    char k;
    printf("enter the any charecter");
    scanf("%c",&k);
    if(k=='a')
    {
            int n=153;
    int temp=n;
    int rem,sum=0;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if(temp==sum)
    {
        printf("armstrong number");
    }
    else{
        printf("not");
    }
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
    if(temp==sum){
        printf("palindrome number");
    }
    else{
        printf("not matched");
    }
    }
    else if(k=='r')
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
    else if(k=='s')
    {
        int n=6512;
    int sum=0;
    int rem;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("%d",sum);
    }
    else if(k=='n')
    {
        int n=9;
    int square=n*n;
    int rem,sum=0;
    while (square>0)
    {
        rem=square%10;
        sum=sum+rem;
        square=square/10;
    }
    if (sum==n)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
        
    }
    else{
        printf("input is not matched");
    }
    return 0;
    }
    
 -------------------------------------------------------------------------------------------------------------------
  //1---10 number print (for loop)    
#include<stdio.h>
int main(){
    for(int i=1;i<=10;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}
-------------------------------------------------------------------------------------------------------------------
//34---89 number print (for loop)
#include<stdio.h>
int main(){
    for(int i=34;i<=89;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}
-----------------------------------------------------------------------------------------------------------------
//10---1 number print (for loop)

#include<stdio.h>
int main(){
    for(int i=10;i>=1;i--)
    {
        printf("%d\n",i);
    }
    return 0;
}
-------------------------------------------------------------------------------------------------------------------
//100 ---- 1 number print (for loop)
#include<stdio.h>
int main(){
    for(int i=100;i>=1;i--)
    {
        printf("%d\n",i);
    }
    return 0;
}
------------------------------------------------------------------------------------------------------------------
#include<stdio.h>
int main(){
    for(int i=78;i>=56;i--)
    {
        printf("%d\n",i);
    }
    return 0;
}
-------------------------------------------------------------------------------------------------------------------
//1 ---- 10 even number 
#include<stdio.h>
int main(){
    for(int i=1;i<=10;i++)
    {
    if(i%2==0)
     {
       printf("%d\n",i);        
     }
    }
    return 0;
}
-------------------------------------------------------------------------------------------------------------------
//1 ----5 number sum dry run 
 
#include<stdio.h>
int main(){
    int sum=0;
    for(int i=1;i<=5;i++)
    {
      sum=sum+i;
    }
    printf("%d",sum);
    
    return 0;
}
-------------------------------------------------------------------------------------------------------------------
//100 ---- 1 number :odd number 
#include<stdio.h>
int main(){
    for(int i=100;i>=1;i--)
      {
      if(i%2!=0)
      {
          printf("%d\n",i);
      }
      }
      return 0;
   }
------------------------------------------------------------------------------------------------------------------
//1 ---- 10 even number ka sum 
#include<stdio.h>
int main(){
    int sum=0;
    for(int i=1;i<=10;i++)
      {
      if(i%2==0)
      {
        printf("%d\n",i);
        sum=sum+i;
      }
      }
      printf("%d\n",sum);
      return 0;
   }
--------------------------------------------------------------------------------------------------------------
/*factorial :
6 dry run*/
#include<stdio.h>
int main(){
    int fact=1;
    int n=6;
    for(int i=1;i<=6;i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
    return 0;
}
--------------------------------------------------------------------------------------------------------------
//table print 2
#include<stdio.h>
int main(){
    int mul;
    int n=2;
    for(int i=1;i<=10;i++)
    {
    mul=n*i;
    printf("%d",mul);
    }
    
    return 0;
}
----------------------------------------------------------------------------------------------------------------
/*a :user input starting and ending point :number print (direction forward direction )
b:user input :starting and ending point :backward direction :even number 
c :user input :starting point and ending point :sum of all numbers 
d :user input starting point and ending :odd number ka sum 
otherwise :input is not matched*/
#include<stdio.h>
int main()
{
    char k;
    printf("enter the character");
    scanf("%c",&k);
    if (k=='a')
    {
        int a,b;
        printf("enter the starting point ");
        scanf("%d",&a);
        printf("enter the starting point ");
        scanf("%d",&b);
        for(int i=a;i<=b;i++)
        {
            printf("%d",i);
        }
        }
        if(k=='b')
        {
        int sum=0;
        int a,b;
        printf("enter the starting point");
        scanf("%d",&a);
        printf("enter the starting point");
        scanf("%d",&b);
        for(int i=a;i>=b;i--)
        {
        if(i%2==0){
        sum=sum+i;
        printf("%d\n",i);
        }
        }
        printf("%d\n",sum);
        }
        
        if(k=='c')
        {
           int sum=0;
        int a,b;
        printf("enter the starting point");
        scanf("%d",&a);
        printf("enter the starting point");
        scanf("%d",&b);
        for(int i=a;i<=b;i++)
        {
            sum=sum+i;
        }
        printf("%d",sum);
        }
        
        if(k=='d')
        {
        int sum=0;
        int a,b;
        printf("enter the starting point");
        scanf("%d",&a);
        printf("enter the starting point");
        scanf("%d",&b);
        for(int i=a;i<=b;i++)
        {
            if(i%2!=0){
                sum=sum+i;
                printf("%d\n",i);
        }
        }
        printf("%d\n",sum);
        }
        else{
            printf("input is not matched");
        }
        return 0;
        }
---------------------------------------------------------------------------------------------------------------------------
//alternative number
#include<stdio.h>
int main(){
    int sum=0;
    for(int i=1;i<=10;i++)
      {
      if(i%2==1)
      {
         sum=sum+i; 
      }
      else{
          sum=sum-i;
      }
      }
      printf("%d",sum);
      return 0;
--------------------------------------------------------------------------------------------------------------------------
