/*4. WAP to make simple calculator (operation include Addition, Subtraction, 
Multiplication, Division, modulo) using conditional statement
*/
#include<stdio.h>
int main(){
	int choice,a,b;
	
	printf("Enter your choice n1/n2/n3/n4 \n :");
	scanf("%d",&choice);
	printf("Enter a value :");
	scanf("%d",&a);
	printf("Enter a value :");
	scanf("%d",&b);
	
	if(choice==1){
		printf("%d",a+b);
	}else if(choice==2){
		printf("%d",a-b);
	}else if(choice==3){
		printf("%d",a*b);
	}else if(choice==4){
		printf("%d",a/b);
	}else if(choice==5){
		printf("%d",a%b);
	}else{
		printf("wrong choice \n");
	}
	    printf("finish \n");
}
