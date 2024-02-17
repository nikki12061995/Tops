//24. Accept 5 employees name and salary and count average and total salary
#include<stdio.h>
int main(){
	int a1,b1,c1,d1,e1,ca,ts;
	char a,b,c,d,e;
	
	printf("enter employe name:");
	scanf(" %c",&a);
	printf("enter employe name:");
	scanf(" %c",&b);
	printf("enter employe name:");
	scanf(" %c",&c);
	printf("enter employe name:");
	scanf(" %c",&d);
	printf("enter employe name:");
	scanf(" %c",&e);
	
	printf("employees salary:");
	scanf(" %d",&a1);
	printf("employees salary:");
	scanf(" %d",&b1);
	printf("employees salary:");
	scanf(" %d",&c1);
	printf("employees salary:");
	scanf(" %d",&d1);
	printf("employees salary:");
	scanf(" %d",&e1);
	
	ts=a1+b1+c1+d1+e1;
	ca=ts/5;
	printf("\ntotal salary:%d",ts);
	printf("\ncount avarge:%d",ca);
	





}
