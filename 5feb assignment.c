/*write a c program input number :
	1---- 10 :number is present between 1 to 10 
	11 ---20 :number is present between 11 to 20 
	otherwise :input is not matched*/
	
	#include<stdio.h>
	int main(){
	    int n;
	    printf("enter the any number");
	    scanf("%d",&n);
	    if(n>=1 && n<=10){
         printf("number is presnt between 1 to10");	        
	    }
	    else if(n>=11 && n<=20){
	        printf("number is present between 11 to 20");
	    }
	    else{
	        printf("input is not matched");
	    }
	    return 0;
	    }
-------------------------------------------------------------------------------------------------------------------------------

/*C program to convert temperature from Fahrenheit to Celsius and Celsius to Fahrenheit
celsius 
f---->c 
fahrenheit
c---f*/ 

#include<stdio.h>
int main()
{
    char a;
    printf("Enter any character:");
    scanf("%c",&a);
    if (a=='c')
    {
        float f ,c;
        printf("Enter the temperature in celsius :");
        scanf("%f",&c);
        f=(1.8*c)+32;
        printf(" %f",f);
    }
    else if (a=='f')
    {
        float f,c;
        printf("Enter the temperature in fehrenhite:");
        scanf("%f",&f);
        c=(f-32)*5/9;
        printf(" %f",c);
    }
    else{
        printf("inout is not matched");  
        }

   
    return 0;
}
-------------------------------------------------------------------------------------------------------

/*C program to enter student marks and find percentage and grade
A college has the following rules for the grading system:
5 marks (grade + %)
1. Below 25 – F
2. 25 to 45 – E
3. 45 to 50 – D
4. 50 to 60 – C
5. 60 to 80 – B 
6. Above 80 – A*/

#include<stdio.h>
int main(){
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
     
     return 0;
     }
------------------------------------------------------------------------------------------------------------------------------------
/*salalry : holidays (1) =full salary 
2-5 =5% 
5-14 =10% 
15 =50% 
else =not salary output : 
name:
address: 
bank details: 
salary : 
alot :
 holidays */
 
 #include<stdio.h>
 int main(){
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
     
     return 0;
 }
-----------------------------------------------------------------------------------------------------------------------------------------
/*Write a c program to read the roll no, name,fnname and marks of three subjects and calculate the total, percentage and division.
Test Data :Input the Roll Number of the student :78 
student name : 
fname:
mname:
address:
contact:
Input the marks of Physics, Chemistry and Computer Application : 70 80 90
total: 
precentage : % 
division:*/

#include<stdio.h>
int main(){
    printf("rollno.78\n");
    printf("name=kunaltailor\n");
    printf("fname=satyaprakash\n");
    printf("mname=lalitadevi\n");
    printf("addres-bhilwara\n");
    printf("contact-6377347887\n");
    float physics,chemestry,maths,total;
    printf("enter the marks of physics,chemestry,maths");
    scanf("%f %f %f",&physics,&chemestry,&maths);
    total=physics+chemestry+maths;
    float percentage;
     percentage=(total/300)*100;
    
    if(percentage>=60)
    {
        printf("1st division");
        printf("%f",percentage);
    }
    else if(percentage<60 && percentage>=50)
    {
        printf("2nd division");
        printf("%f",percentage);
    }
    else if(percentage<50 && percentage>=40)
    {
        printf("3rd division");
        printf("%f",percentage);
    }
    else if(percentage<40)
    {
        printf("fail");
    }
    else {
        printf("input not matched");
    }
    
    
    
    return 0;
}
-------------------------------------------------------------------------------------------------------------------------------------
/*electric city bill : 
4 unit 
40 
1- 10 = 10% 
11-20 =15% 
21-40 =30% 
50 =50% 

output : 
name:
unit :3 
amout 30 
discout : 10% 
total pay amount :*/

#include<stdio.h>
int main() {
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
   
    return 0;
}

-----------------------------------------------------------------------------------------------------------------------------

/*Tax Calculator
Write a c program that calculates income tax for individuals based on the following criteria:

Income <= 10,000: No tax
10,001 - 30,000: 10% tax
30,001 - 50,000: 20% tax
Income > 50,000: 30% tax*/

#include<stdio.h>
int main(){
    float income;
    printf("enter the income");
    scanf("%f",&income);
    if(income<=10000){
        printf("not tax");
    }
    else if(income>=10001 && income<=30000)
    {
        float totalincome;
        float discount;
        discount=(income/100)*10;
        totalincome=income-discount;
        printf("%f",totalincome);
    }
    if(income>=30001 && income<=50000)
    {
        float totalincome;
        float discount;
        discount=(income/100)*20;
        totalincome=income-discount;
        printf("%f",totalincome);
    }
    if(income>50000){
        float totalincome;
        float discount;
        discount=(income/100)*30;
        totalincome=income-discount;
        printf("%f",totalincome);
    }
    return 0;
}


---------------------------------------------------------------------------------------------------------------------------
/*BMI Calculator
Create a program that calculates the Body Mass Index (BMI) based on a person's weight and height. Categorize the BMI using the following ranges:

BMI < 18.5: Underweight
18.5 <= BMI < 24.9: Normal weight
25 <= BMI < 29.9: Overweight
BMI >= 30: Obesity*/

#include<stdio.h>
int main(){
 float weight,height;
 printf("enter the weight in kilogram");
 scanf("%f",&weight);
 printf("enter the height in feet");
 scanf("%f",&height);
     float bmi;
     bmi=weight/(height*height);
     
    
     if(bmi<18.5)
             {
             printf("bmi %f underweight",bmi);
                 
             }
      else if(bmi>=18.5 && bmi<=24.9)
      {
        printf("bmi %f normal weight",bmi);  
      }
      else if(bmi>=25 && bmi<29.9)
      {
          printf("bmi %f overwight",bmi);
      }
      else if(bmi>=30)
      {
          printf("obesity");
      }
      else{
          printf("input not matched");
      }
             
             
  return 0;
  
 }
------------------------------------------------------------------------------------------------------------------------
/*Time of Day Greeting
Create a program that asks for the time of day (morning, afternoon, evening) and 
then greets the user accordingly. For example, "Good morning!" if the time is morning.
*/

#include <stdio.h>
int main()
{
    char day;
    printf("enter the any day");
    scanf("%c",&day);
    float time;
    printf("enter the time");
    scanf("%f",&time);
    if(time>=6 && time<12)
    {
      printf("Morning");
     }
    else if(time>=12 && time<16)
    {
        printf("afternoon");
    }
    else if(time>=16 && time<=24)
    {
        printf("evining");
    }
    else{
         printf("input not valid plz enter valid time");
    }
    return 0;
}
-------------------------------------------------------------------------------------------------------------------------------
/*Menu Selection
Design a simple restaurant menu system that takes a customer's choice (1-3) and displays the selected food item and its price. 
Use if-else if-else statements.
*/

#include<stdio.h>
int main(){
    int srno;
    printf("enter the number between 1-3");
    scanf("%d",&srno);
    if(srno==1){
        
        printf("the food is Sandwich");
        printf("the price is sandwich 150");
    }
    else if(srno==2){
        
        printf("the food name is pizza");
        printf("the price is pizza 200");
    }
    else if(srno==3){
        
        printf("the food is burger");
        printf("the price is burger 180");
    }
    else{
        printf("input not valid");
    }
    
    return 0;
}

-------------------------------------------------------------------------------------------------------------------------------------
/*Ticket Booking System
Design a ticket booking system for a cinema that calculates the ticket price based on the age of the customer.
Children (age < 12) get a 50% discount, while seniors (age >= 65) get a 30% discount.*/

#include<stdio.h>
int main(){
    int age;
    printf("enter the age ");
    scanf("%d",&age);
    float price;
    printf("enter the price");
    scanf("%f",&price);
 if(age<=12) 
 {
  float total=price*0.50;
  printf("the total :%f",total);
 }
 if(age>=65)
 {
     float total=price*0.70;
  printf("the total :%f",total);
 }
 else{
     printf("no discount");
 }
    return 0;
 }
-----------------------------------------------------------------------------------------------------------------------------
/*Letter Grade Calculator
Write a program that accepts a student's score as input and calculates their letter grade using if-else if-else statements.
Consider the standard letter grading system (A, B, C, D, F).*/

#include<stdio.h>
int main(){
    float score;
    printf("enter the student score");
    scanf("%f",&score);
    if(score>=81 && score<=100)
    {
        printf("grade is A");
    }
   else if(score>=61 && score<=80)
    {
     printf("grade is B");   
    }
    else if(score>=51 && score<=60)
    {
    printf("grade is C");
    }
    else if(score>=40 && score<=50)
    {
        printf("grade is D");
    }
    else{
        printf("grade is f");
    }
     
    return 0;
    }
----------------------------------------------------------------------------------------------------------------------
//five number maximum 
#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("enter the value of a,b,c,d,e");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    if(a>b && a>c && a>d && a>e){
        printf("a is maximum");
    }
    else if(b>a && b>c && b>d && b>e)
    {
        printf("b is maximum");
    }
   else if(c>a && c>b && c>d && c>e)
    {
     printf("c is maximum");   
    }
    else if(d>a && d>b && d>c && d>e)
    {
        printf("d is maximum");
    }
    else 
    {
        printf("e is maximum");
    }
    
    return 0;
    }
----------------------------------------------------------------------------------------------------------------------------------
//ten number is maxium
/*write a c program input three numbers a b and c
three number maximum 

five number maximum 

ten number maximum*/

#include<stdio.h>
int main(){
    int a,b,c,d,e,f,g,h,i,j;
    printf("enter the value of a,b,c,d,e,f,g,h,i,j");
    scanf("%d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
    if(a>b && a>c && a>d && a>e && a>f && a>g && a>h && a>i && a>j){
        printf("a is maximum");
    }
    else if(b>a && b>c && b>d && b>e && b>f && b>g && b>h && b>i && b>j)
    {
        printf("b is maximum");
    }
   else if(c>a && c>b && c>d && c>e && c>f && c>g && c>h && c>i && c>j)
    {
     printf("c is maximum");   
    }
    else if(d>a && d>b && d>c && d>e && d>f && d>g && d>h && d>i && d>j)
    {
        printf("d is maximum");
    }
    else if(e>a && e>b && e>c && e>d && e>f && e>g && e>h && e>i && e>j)
    {
        printf("e is maximum");
    }
    else if(f>a && f>b && f>c && f>d && f>e && f>g && f>h && f>i && f>j)
    {
        printf("f is maximum");
    }
    else if(g>a && g>b && g>c && g>d && g>e && g>f && g>h && g>i && g>j)
    {
        printf("g is maximum");
    }
    else if(h>a && h>b && h>c && h>d && h>e && h>f && h>g && h>i && h>j)
    {
        printf("h is maximum");
    }
    else if(i>a && i>b && i>c && i>d && i>e && i>f && i>g && i>h && i>j)
    {
        printf("i is maximum");
    }
    else{
         printf("j is maximum");
        
          }
    
    
    return 0;
    }



    
    
       
   
    
