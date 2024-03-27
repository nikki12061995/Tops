//25. Accept 5 expense from user and find average of expense
#include<stdio.h>
int main(){
	int a,b,c,d,e,ave,t;
	
	printf("enter expense value:");
	scanf("%d",&a);
	printf("enter expense value:");
	scanf("%d",&b);
	printf("enter expense value:");
	scanf("%d",&c);
	printf("enter expense value:");
	scanf("%d",&d);
	printf("enter expense value:");
	scanf("%d",&e);
	
	t=a+b+c+d+e;
	
	printf("average expense:%d",t);
	
	return 0;
	
	
	
}
