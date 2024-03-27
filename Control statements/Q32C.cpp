/*32. Write a C program to input basic salary of an employee and calculateits 
Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80% 
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%\
*/
#include<stdio.h>
int main(){
	int Bs,Gs,HRA,DA;
	printf("Enter Basic salary of employee :");
	scanf("%d",&Bs);
	
	if(Bs<=10000){
		HRA = Bs * 0.2;
		DA = Bs * 0.8;
		Gs = Bs+ HRA + DA;
		printf("your Gross salary %d",Gs);
		
	}else if(Bs<=20000){
		HRA = Bs * 0.2;
		DA = Bs * 0.8;
		Gs = Bs+ HRA + DA;
		printf("your Gross salary %d",Gs);
		
    }else if(Bs>20000){
    	HRA = Bs * 0.2;
		DA = Bs * 0.8;
		Gs = Bs+ HRA + DA;
		printf("your Gross salary %d",Gs);
		
    }
    return 0;
	
}
