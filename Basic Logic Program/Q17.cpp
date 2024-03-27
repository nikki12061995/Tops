// 17. Calculate person’s insurance premium based on salary

#include<stdio.h>
int main(){
	
	float bs;
	printf("enter salary of person:");
	scanf("%f",&bs);
	
	printf("persons based on salary:%f",bs/500);
	return 0;
	
}





/*
18. calculate person's annual salary
*/

#include<stdio.h>
int main(){
	float salary;
	printf("enter monthly salary");
	scanf("%f",&salary);
	printf("annual salary %f",salary*12);
	return 0;
}
