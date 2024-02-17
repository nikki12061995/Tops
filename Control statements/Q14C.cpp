//14. WAP to find the largest of three numbers.

#include<stdio.h>
int main(){
	int a,b,c,larg;
	
	printf("Enter the largest number :\n");
	scanf("%d %d %d",&a ,&b, &c);
	
	larg=((b>c && b>a) ? b : ((c>a && c>b) ? c :a));
	
	printf("The largest number is %d %d and %d is %d",a,b,c,larg);
	
	return 0;
}


