#include<stdio.h>
int main(){
    int a=1;
    while(a<=10)
    {
        printf("%d\n",a);
        a++;
    }
    return 0;
}

-----------------------------------------------------------------------------------------------------------------------------

#include<stdio.h>
int main(){
    int a=1;
    while(a<=100)
    {
        printf("%d\n",a);
        a++;
        
    }
    return 0;
}
---------------------------------------------------------------------------------------------------------------------------------

#include<stdio.h>
int main(){
    int a=34;
    while(a<=89)
    {
     printf("%d\n",a);
     a++;
    }
  return 0;  
}
-----------------------------------------------------------------------------------------------------------------------------------

/*write a c program input character :
	s :number swap without third variable 
    w :
		number swap with third variable 
		e :
		1 ---10 number print while loop 
		i :
		23---->78 number print while loop

	otherwise :input is not matched */
#include<stdio.h>
int main(){
    char a;
    printf("enter the any single charecter");
    scanf("%c",&a);
    
    if(a=='s')
    {
    int a=170;
    int b=390;
    printf("the value of a is :%d\n",a);
     printf("the value of b is :%d\n",b);
    a=a+b;
    b=a-b;
    a=a-b;
     printf("the swap value of a is :%d\n",a);
      printf("the swap value of b is :%d\n",b);
    }
    else if(a=='w'){
        
    int a=380;
    int b=600;
    int c;
    printf("the value of a is :%d\n",a);
     printf("the value of b is :%d\n",b);
   c=a;
   a=b;
   b=c;
     printf("the swap value of a is :%d\n",a);
      printf("the swap value of b is :%d\n",b);
        
    }
    else if(a=='e')
    {
        int f=1;
        while(f<=10)
        {
            printf("%d\n",f);
            f++;
        }
    }
    else if(a=='i')
    {
        int m=23;
        while(m<=78)
        {
          printf("%d\n",m);
          m++;
        }
    }
    else{
        printf("input not matched");
    }
    
    return 0;
}
--------------------------------------------------------------------------------------------------------------------------