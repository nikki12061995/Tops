/*2. WAP of Addition, Subtraction, Multiplication and Division using Switch 
case.(Must Be Menu Driven)
*/
#include<stdio.h>
  
int main(){
	int a,b,choice=0;
	printf("Enter number 1 :");
	scanf("%d",&a);
	printf("Enter number 2 :");
	scanf("%d",&b);
	
	printf("enter your choice:");
	printf("\n1.add\n2.sub\n3.mul\n4.div:\n");
	scanf("%d",&choice);
	switch(choice){
    	   case 1:
    	   	printf("sum:%d",a+b);
    	   	break;
    	   case 2:
    	   	printf("sub:%d",a-b);
    	   	break;
    	   case 3:
    	   	printf("mul:%d",a*b);
    	   	break;
    	   case 4:
    	   	printf("div:%d",a/b);
    	   	break;
    	   default:
    	   	printf("Input correct choice\n");
    	   	break;
		  	
	}
	
} 
