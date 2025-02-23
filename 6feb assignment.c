/*write a program :
	input character :v 
		input age :age greater than 18 :valid 
		otherwise :you are not valid for vote 
        otherwise :
		error */

#include<stdio.h>
int main(){
    char kk;
    printf("enter  the any charecter");
    scanf("%c",&kk);
    if(kk=='v'){
        int age;
        printf("enter the age");
        scanf("%d",&age);
        if(age>=18){
            printf("you are valid for vote ");
            }
       else if(age<18){
            printf("you are not valid for vote"); 
        }        
    }
    else{
        printf("error");
    }
    return 0;
}
-------------------------------------------------------------------------------------------------------------------------

/*hthttps://www.onlinegdb.com/online_c_compiler#editor_1tps://www.onlinegdb.com/online_c_compiler#editor_1write a program :
	input character :k 
		input character :check keyboard line 
		upper and mid and lower line 
	otherwise :input is not matched*/

#include<stdio.h>
int main()
{
    char k;
    printf("Enter any character:");
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
    return 0;
}

-------------------------------------------------------------------------------------------------------------------------------

#include<stdio.h>
int main()
{
    char a;
    printf("enter any character ");
    scanf("%c",&a);
    if(a=='m')
    {
        int k;
        printf("enter the any number");
        scanf("%d",&k);
        if(k==1){
            printf("jan");
        }
        else if(k==2){
            printf("feb");    
        }
        else if(k==3){
            printf("march");
        }
        else if(k==4){
            printf("april");
        }
        else if(k==5){
            printf("may");
        }
        else if(k==6){
            printf("jun");
        }
        else if(k==7){
            printf("july");
        }
        else if(k==8){
            printf("aug");
        }
        else if(k==9){
            printf("sep");
        }
        else if(k==10){
            printf("oct");
        }
        else if(k==11){
            printf("nov");
        }
        else if(k==12){
            printf("dec");
        }
        else{
            printf("input is not matched");
        }
    }
    else if(a=='w')
    {
        int num;
        printf("enter the number");
        scanf("%d",&num);
        if(num==1){
            printf("sunday");
        }
        else if(num==2){
            printf("monday");
        }
        else if (num==3){
            printf("tuesday");
        }
        else if(num==4){
            printf("wdnesday");
        }
        else if(num==5){
            printf("thuresday");
        }
        else if(num==6){
            printf("friday");
        }
        else if(num==7){
            printf("saturday");
        }
        else{
            printf("input is not valid");
        }
    }
    else if(a=='v')
    {
        char kt;
        printf("enter any single");
        getchar();
        scanf("%c",&kt);
        if(kt=='a' || kt=='e' || kt=='i' || kt=='o' || kt=='u'){
            printf("vowel");
            }
        else{
             printf("consonant");
             }  
    }
    else if(a=='s')
    {
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
    else if(a=='b')
    {
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
    else if(a=='t')
    {
        char day;
        printf("enter the any day");
        getchar();
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
        else
        {
             printf("input not valid plz enter valid time");
        }
    }
    else if(a=='e')
    {
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
    else if(a=='u')
    {
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
    }
    else if(a=='p')
    {
        char a;
    printf("Enter any character:");
    getchar();
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
    }
    else if(a=='y')
    {
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
    }
    else{
        printf("input is not matched");    }
    return 0;
    
}