//33. C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
#include<stdio.h>
int main(){
	int num,a,b,c;
	
	printf("\nEnter the number:");
	scanf("%d",&num);
	
	a=num;
	b=num*a;
	c=b*num;
	printf("\noutput is\n\n");
	printf("%d ,%d ,%d\n\n",a,b,c);
	
	return 0;
}
