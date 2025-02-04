        /*write a c program input character :
		a :two number input :addition s:two number input :substraction
		d :two number input :divide
        m :two number input :multiply
		otherwise :input is not matched*/
		
		#include<stdio.h>
		int main(){
		    char n;
		    printf("enter the any charecter");
		    scanf("%c",&n);
		    if(n=='a'){
		        int k,j,h;
		        printf("enter the value of k,j");
		        scanf("%d %d",&k,&j);
		        h=k+j;
		        printf("%d",h);
		       } 
		  else if(n=='d'){
		       int p,o,i;
		       printf("enter the value of p,o");
		       scanf("%d %d",&p,&o);
		       i=p/o;
		       printf("%d",i);
		   }
		   else if(n=='m'){
		       int u,y,t;
		       printf("enter the value of u,y");
		       scanf("%d %d",&u,&y);
		       t=u*y;
		       printf("%d",t);
		   }
		   else{
		       printf("input is not matched");
		   }
		   
		   return 0;
		   }