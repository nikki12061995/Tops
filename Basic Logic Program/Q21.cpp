/*21. Accept 2 numbers from user and swap 2 numbers with using 3rd variable 
and without using 3rd variable
*/
#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter value of a:");
	scanf("%d",&a);
	printf("enter value of b:");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("\nafter swaping a:%d,b:%d",a,b);
	
	
	
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nwithout using 3rd variable a:%d,b:%d\n",a,b);

	return 0;
	
	
}
