//13. WAP to find minimum number among 3 numbers using ternary operator
#include<stdio.h>
int main(){
	int a,b,c,min;
	
	printf("enter the three number:");
	scanf("%d %d %d",&a, &b, &c);
	
	min=((a<b && a<c) ? a : ((b<c && b<a) ? b : c));
	
	printf("minimum number among %d %d and %d is %d",a ,b, c,min);
	
	return 0;
}
