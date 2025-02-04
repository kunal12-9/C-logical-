/*write a c program input number and print1:sunday 2 :Monday 
	all week days 
	otherwise input is not valid*/
	
    #include<stdio.h>
    int main() {
    int num;
    printf("enter the any number");
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
    
    return 0;
    }