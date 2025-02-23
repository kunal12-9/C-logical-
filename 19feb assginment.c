#include<stdio.h>
     void add();
    void sub();
    void divi();
    void multi();
    void mod();
    
    int main(){
        add();
        sub();
        divi();
        multi();
        mod();
    return 0;
   }
   
     void add(){
       int a,b,c;
       printf("enter the value a and b");
       scanf("%d %d", &a,&b);
       c=a+b;
       printf("%d\n",c);
       }
     void sub(){
       int a,b,c;
       printf("enter the value of a and b");
       scanf("%d %d",&a,&b);
       c=a-b;
       printf("%d\n",c);
       }
     void divi(){
       int a,b,c;
       printf("enter the value of a and b");
       scanf("%d %d",&a,&b);
       c=a/b;
       printf("%d\n",c);
       }
    void multi(){
       int a,b,c;
       printf("enter the value of a and b");
       scanf("%d %d",&a,&b);
       c=a*b;
       printf("%d\n",c);
       }
     void mod(){
       int a,b,c;
       printf("enter the value of a and b");
       scanf("%d %d",&a,&b);
       c=a%b;
       printf("%d\n",c);
       }
----------------------------------------------------------------

       
swap() 
even()
maximum()
vowel()
gender()
voter()
electricity()
salary()
marksheet()
keyboard()
       
       
    #include<stdio.h>
     void voter();
     void swap();
    void maximum();
    void salary();
    void elctricity();
    void marksheet();
    void keyboared();
    
    int main(){
        voter();
        swap();
        maximum();
       salary();
       elctricity();
       marksheet();
       keyboared();
        
        return 0;
    }
    void voter(){
        int age;
    printf("enter the any age");
    scanf("%d",&age);

    if(age>=18){
        printf("you are valid for vote");
    }

    else{
        printf("you are not valid for vote");
    }
    }

   void swap(){
        int a=10;
        int b=20;
        printf("enter the value a and b");
        scanf("%d %d",&a,&b);
     
    a=a+b; 
    b=a-b;  
    a=a-b; 
     printf("%d\n",a);
      printf("%d\n",b);
    }
    
    void maximum(){
         int a,b,c;
    printf("enter the value of a and b and c ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("a is maximum");
    }
    else if(b>a && b>c){
        printf("b is maximum ");
    }
    else{
        printf("c is maximum ");
    }
    }
    void salary(){
        float sallary;
     int holiday;
     printf("name-kunal tailor\n");
     printf("addres-bhilwara\n");
     printf("bank details *******\n");
     printf("enter the sallary");
     scanf("%f",&sallary);
     printf("enter the holiday");
     scanf("%d",&holiday);
     
     if(holiday==1)
        {
         printf("full sallary");
        }
        else if(holiday>=2 && holiday<5)
        {
            float l;
            l=0.95*sallary;
            printf("less sallary %f",l);
        }
        else if(holiday>=5 && holiday<=14)
        {
            float m;
            m=0.90*sallary;
            printf("less sallary %f",m);
        }
        else if(holiday>=15)
        {
            float o;
            o=0.50*sallary;
            printf("less sallary %f",o);
        }
        else{
            printf("input is not matched");
        }
        
    }
    void elctricity(){
         printf("kunal\n");
            int unit;
            printf("enter the unit");
            scanf("%d",&unit);
            if (unit>=1 && unit<=10)
            {
                float amout;
                float discount,totalamount;
                amout=unit*10;
                discount=(amout/100)*10;
                totalamount=amout-discount;
                printf("amout %f\n",amout);
                printf("discount %f\n",discount);
                printf("totalamount %f\n",totalamount);
                
           }
         else if(unit>=11 && unit<=20)
         {
             float amout;
                float discount,totalamount;
                amout=unit*10;
                discount=(amout/100)*15;
                totalamount=amout-discount;
                printf("amout %f\n",amout);
                printf("discount %f\n",discount);
                printf("totalamount %f\n",totalamount);
             
         }
         else if(unit>=21 && unit<=40)
         {
             float amout;
                float discount,totalamount;
                amout=unit*10;
                discount=(amout/100)*30;
                totalamount=amout-discount;
                printf("amout %f\n",amout);
                printf("discount %f\n",discount);
                printf("totalamount %f\n",totalamount);
             
         }
         else if(unit>=50)
         {
             float amout;
                float discount,totalamount;
                amout=unit*10;
                discount=(amout/100)*50;
                totalamount=amout-discount;
                printf("amout %f\n",amout);
                printf("discount %f\n",discount);
                printf("totalamount %f\n",totalamount);
         }
        
      }
      void marksheet(){
             float english,science,maths,total;
    printf("enter the marks of student");
    scanf("%f %f %f",&english,&science,&maths);
    total=english+science+maths;
    float percentage;
    percentage=(total/300)*100;
    if(percentage<25)
    {
        printf("grade F");
        printf("%f",percentage);
     }
     else if(percentage>=25 && percentage<45)
     {
        printf("garde E");
        printf("%f",percentage);
     }
     else if(percentage>=45 && percentage<50)
     {
       printf("grade D");
       printf("%f",percentage);
     }
     else if(percentage>=50 && percentage<60)
     {
         printf("grade C");
         printf("%f",percentage);
     }
     else if(percentage>=60 && percentage<80)
     {
         printf("grade B");
         printf("%f",percentage);
     }
     else if(percentage>=80 && percentage<=100)
     {
         printf("grade A");
         printf("%f",percentage);
     }
     else{
         printf("input is not matched");
     }
      }
      
      void keyboared(){
          char k;
    printf("Enter any character:");
    getchar();
    scanf("%c",&k);
    if (k=='q' || k=='w' || k=='e' || k=='r' || k=='t' || k=='y' || k=='u' || k=='i' || k=='o' || k=='p')
    {
        printf("Upper line");
    }
    else if (k=='a' || k=='s' || k=='d' || k=='f' || k=='g' || k=='h' || k=='j' || k=='k' || k=='l')
    { 
        printf("Mid line");
    }
    else if (k=='z' || k=='x' || k=='c' || k=='v' || k=='b' ||  k=='n' || k=='m')
    {
        printf("Lower Line ");
    }
    else
    {
        printf("Input is not valid");
    }
      }
------------------------------------------------------------------------------------------------------------------------------------------
#include<stdio.h>
void armstrong();
void reverse();
void sum();
void palindrome();
void count();
void neon();
void factorial();
void evensum();
void fibonaci();
int main(){
    char a;
    printf("enter the any charecter");
    scanf("%c",&a);
    if(a=='a'){
         armstrong();
    }
    else if(a=='b'){
         reverse();
    }
    else if(a=='c'){
         sum();
    }
     else if(a=='d'){
         palindrome();
    }
     else if(a=='e'){
         count();
    }
    else if(a=='f'){
         neon();
    }
     else if(a=='g'){
         factorial();
    }
     else if(a=='h'){
         evensum();
    }
    else if(a=='i'){
        fibonaci();
    }
    else{
        printf("input is not matched ");
    }
    
    return 0;
}

void armstrong(){
    
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

void reverse(){
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

void sum(){
    int sum=0;
    int a=1;
    while(a<=10)
    {
        sum=sum+a;
        a++;
    }
    printf("%d",sum);
}   

void palindrome(){
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

void count(){
     int a=982849;
    int count=0;
    while(a>0){
        a=a/10;
        count++;
    }
    printf("%d",count);
}

void neon(){
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

void factorial(){
    int fact=1;
    int n=6;
    for(int i=1;i<=6;i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
}

void evensum(){
    int sum=0;
    for(int i=1;i<=100;i++)
      {
      if(i%2==0)
      {
        sum=sum+i;
      }
      }
      printf("%d\n",sum);
    }
    
void fibonaci(){
    int n=9;
    int n1=0,n2=1,n3;
    printf("%d %d ",n1,n2);
    for(int i=1;i<=n;i++){
        n3=n1+n2;
        printf("%d ",n3);
        n1=n2;
        n2=n3;
    }
}

-------------------------------------------------------------------------------------------------------------------------------
      
    
    
    
    
    
    
    


       