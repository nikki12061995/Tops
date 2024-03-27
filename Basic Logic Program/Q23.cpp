//23. WAP to calculate swap 2 numbers with using of multiplication and division.

#include<stdio.h>
int main(){
	int a,b;
	
	printf("enter value of a");
	scanf("%d",&a);
	printf("enter value of b");
	scanf("%d",&b);
	
	a=a*b;
		printf("multiplication number a:%d\n",a);
	b=a/b;
			printf("multiplication number b:%d\n",b);
	a=a/b;
	printf("multiplication number a:%d,b:%d\n",a,b);
	
	return 0;
}
